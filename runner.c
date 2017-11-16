#include <stdio.h>
#include <unistd.h>
#include <eerno.h>

int man(){
	printf("Pid: %i\nPrent Pid: %i\n",getpid(),getppid());
	return 0;
}
