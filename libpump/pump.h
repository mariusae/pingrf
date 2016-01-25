
typedef struct
{
	uint month;
	uint day;
	uint hour;	
	uint minute;
	uint year;
	
	uint basal;
	
	uint insulinleft;
	int temp;
	uint temptime;
	uint temptotal;
	
	uint iob;
	uint lastbolus;
} Pstat;


int	pstat(Pstat*);
int	pcombo(uint insulin, uint minutes);
int	pcancel();
