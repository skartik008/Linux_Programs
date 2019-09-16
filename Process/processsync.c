#include<stdio.h>

/*
This program demonstrates the process synchronization
*/

int main()
{
	int pid, dip;
	pid = fork();
	if(pid == 0)
	{
		printf("1st child process id is %d\n",getpid());
		printf("1st child terminating from memory\n");
	}
	else
	{
		dip = fork();
		if(dip == 0)
		{
			printf("2nd child process id is %d\n",getpid());
			printf("2nd child terminating\n");
		}
		else
		{
			printf("Child with pid %d died\n",wait(0));
			printf("Child with pid %d died\n",wait(0));
			printf("I am parent\n");
			sleep(120);
		}
	}
	return 0;
}
