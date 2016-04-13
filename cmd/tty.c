
/*
	This file is mostly derived from the code at
		http://stackoverflow.com/questions/6947413/how-to-open-read-and-write-from-serial-port-in-c
*/

#include "impl.h"

#include <errno.h>
#include <termios.h>
#include <unistd.h>

int
ttysetattr(int fd, int speed, int parity)
{
	struct termios tty;
	
	memset(&tty, 0, sizeof tty);
	
	if(tcgetattr (fd, &tty) != 0){
		werrstr("tcgetattr: %r");
		return -1;
	}

	cfsetospeed(&tty, speed);
	cfsetispeed(&tty, speed);

	tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8 | speed;     /* 8-bit chars */
	/* disable IGNBRK for mismatched speed tests; 
		otherwise receive break as \000 chars */
	tty.c_iflag &= ~IGNBRK;         /*disable break processing */
	tty.c_lflag = 0;               /* no signaling chars, no echo, no canonical processing */
	tty.c_oflag = 0;                /* no remapping, no delays */
	tty.c_cc[VMIN]  = 0;          /* read doesn't block */
	tty.c_cc[VTIME] = 5;            /* 0.5 seconds read timeout */

	tty.c_iflag &= ~(IXON | IXOFF | IXANY); /* shut off xon/xoff ctrl */

	tty.c_cflag |= (CLOCAL | CREAD); /* ignore modem controls, enable reading */
	tty.c_cflag &= ~(PARENB | PARODD);      /* shut off parity */
	tty.c_cflag |= parity;
	tty.c_cflag &= ~CSTOPB;
	tty.c_cflag &= ~CRTSCTS;

	if(tcsetattr(fd, TCSANOW, &tty) != 0){
		werrstr("tcsetattr: %r");
		return -1;
	}
	
	return 0;
}

int
ttysetblocking(int fd, int block)
{
	struct termios tty;
	memset(&tty, 0, sizeof tty);
	
	if(tcgetattr(fd, &tty) != 0){
		werrstr("tcgetattr: %r");
		return -1;
	}

	tty.c_cc[VMIN]  = block ? 1 : 0;
	tty.c_cc[VTIME] = 5;            /* 0.5 seconds read timeout */
	
	if (tcsetattr(fd, TCSANOW, &tty) != 0){
		werrstr("tcsetattr: %r");
		return -1;
	}
	
	return 0;
}
