
struct
{
	int (*call)(void*, Rcall*);
	void* (*open)(char*);
} Radio;

/*
	make it all thread oriented

	desc = tty->open("...");

	for(;;){
		rcall = ...
		send(rcall)
	}


	so a radio drive is a way of getting a channel, basically.
	Channel* open(...);

	maybe a reset channel, too?
	
	

rcall(..):
	send(....);
	recv(...);
*/
