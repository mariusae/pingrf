typedef struct Table Table;

Table*	tableopen(char *, uint, uint);
int		tablewrite(Table*, void*, void*);
void*	tablelookup(Table*, void*);
