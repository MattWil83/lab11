#include <stdio.h>
#include <unistd.h>

int main(){
	int x=1;
	pid_t pid;
	pid = fork();

	if(pid==0){
		x++;
		printf("In child\n");
		printf("%i\n",getpid());
	}
	else{
		x--;
		sleep(1);
		printf("In parent\n");
		printf("%i\n",getpid());
	}
	return 0;
}
