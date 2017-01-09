#include <u.h>
#include <libc.h>
#include <task.h>

/* See: http://elinux.org/RPi_GPIO_Code_Samples */

#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>

enum
{
	Bcm2708 = 0x20000000,
	Gpio = Bcm2708+0x200000,

	Block = 4*1024,
	Page = 4*1024,

	Resetpin = 18,
};

#define GPIOINPUT(g) 	*(gpio+((g)/10)) &= ~(7<<(((g)%10)*3))
#define GPIOOUTPUT(g) 	*(gpio+((g)/10)) |=  (1<<(((g)%10)*3))
#define GPIOSETALT(g,a) 	*(gpio+(((g)/10))) |= (((a)<=3?(a)+4:(a)==4?3:2)<<(((g)%10)*3))
 
#define GPIOSET 		*(gpio+7)  // sets   bits which are 1 ignores bits which are 0
#define GPIOCLR 		*(gpio+10) // clears bits which are 1 ignores bits which are 0
 
#define GETGPIO(g) 		(*(gpio+13)&(1<<g)) // 0 if LOW, (1<<g) if HIGH

#define GPIOPULL 		*(gpio+37) // Pull up/pull down
#define GPIOPULLCLK0 	*(gpio+38) // Pull up/pull down clock

static volatile unsigned *gpio;

static int
init()
{
	int fd;
	void *map;

	fd = open("/dev/gpiomem", O_RDWR|O_SYNC);
	if(fd < 0){
		werrstr("open /dev/gpiomem: %r");
		return -1;
	}

	map = mmap(0, Block, PROT_READ|PROT_WRITE, MAP_SHARED, fd, Gpio);
	close(fd);
	if(map == MAP_FAILED){
		werrstr("mmap: %r");
		return -1;
	}
	
	gpio = (volatile unsigned*)map;
	
	GPIOOUTPUT(Resetpin);

	return 0;
}

int
rpigpioradioreset()
{
	if(gpio == nil && init() < 0)
		return -1;

	GPIOCLR = 1<<Resetpin;
	/* Is this too long? */
	taskdelay(500);
	GPIOSET = 1<<Resetpin;
	taskdelay(500);
	return 0;
}
