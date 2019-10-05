#include<stdio.h>

int globvar = 6;
char buf[] ="a write to stdout\n";

int main()
{
	int var;
	int pid;
	var = 88;
	printf("Before fork\n");
	
	if((pid=fork())<0){
		printf("fork error\n");	
	}else if(pid == 0){
		globvar++;
		var++;
	}else{
		sleep(5);
	}
	printf("pid = %ld, globvar = %d, var = %d\n", (long)getpid(),globvar,var);
	exit(0);
}