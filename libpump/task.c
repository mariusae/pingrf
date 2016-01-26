#include <u.h>
#include <unistd.h>

int
taskdelay(uint ms)
{
	return usleep(1000*ms);
}
