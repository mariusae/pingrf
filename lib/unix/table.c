#include <u.h>
#include <lib.h>
#include <table.h>

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

enum
{
	MAXTAB = 1<<19
};

struct Table
{
	int fd;
	uint8 *bp;
	uint8 *ep;
	uint keysize;
	uint valuesize;
	uint entrysize;
};

Table* 
tableopen(char *name, uint keysize, uint valuesize)
{
	Table *tab;
	char *dir = getenv("PB");
	char path[256];
	int n;
	
	if(dir == nil){
		werrstr("$PB not defined");
		return nil;
	}

	tab = malloc(sizeof *tab);
	if(tab == nil)
		return nil;

	snprint(path, sizeof path, "%s/%s", dir, name);

	tab->fd = open(path, O_CREAT|O_RDWR, 0600);
	if(tab->fd < 0){
		werrstr("open(%s): %r", path);
		free(tab);
		return nil;
	}

	tab->keysize = keysize;
	tab->valuesize = valuesize;
	tab->entrysize = keysize+valuesize;

	tab->bp = mmap(0, MAXTAB, PROT_READ|PROT_WRITE, MAP_SHARED, tab->fd, 0);
	if(tab->bp == MAP_FAILED){
		werrstr("mmap: %r");
		close(tab->fd);
		free(tab);
		return nil;
	}

	if((n=lseek(tab->fd, 0, SEEK_END)) < 0){
		werrstr("lseek: %r");
		close(tab->fd);
		free(tab);
		return nil;
	}
	
	tab->ep = tab->bp + n;

	return tab;
}

int 
tablewrite(Table *tab, void *k, void *v)
{
	uint n;
	uint8 *vv;
	
	if((vv=tablelookup(tab, k)) != nil){
		memcpy(vv, v, tab->valuesize);
		return 0;
	}

	n = tab->ep-tab->bp+tab->entrysize;
	/* TODO: look up first */

	if(n > MAXTAB){
		werrstr("Table exceeds maximum size");
		return -1;
	}

	ftruncate(tab->fd, n);

	memcpy(tab->ep, k, tab->keysize);
	tab->ep += tab->keysize;
	memcpy(tab->ep, v, tab->valuesize);
	tab->ep += tab->valuesize;

	/* Break out into separate call? */
	msync(tab->bp, n, MS_SYNC);
	
	return 0;
}

void*
tablelookup(Table *tab, void *k)
{
	uint8 *p;
	
	for(p=tab->bp; p < tab->ep; p += tab->entrysize)
		if(memcmp(p, k, tab->keysize) == 0)
			return p+tab->keysize;
	
	return nil;
}
