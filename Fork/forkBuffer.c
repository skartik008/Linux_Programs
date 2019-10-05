#include<stdio.h>

/*
	Compile this program and run it twice
	1. Output to the standard output
	2. Output to a file

	In the standard output, Before fork line is printed once
	When the output redirected to a file, Before fork is printed twice

*/

int globvar = 6;

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
