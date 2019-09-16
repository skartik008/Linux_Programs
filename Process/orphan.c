#include<stdio.h>

/*
This program demonstrates the orphan process
*/

void main()
{
	int pid;
	pid = fork();
	
	if(pid == 0)
	{
		printf("I am the child, my process ID is %d\n",getpid());
		printf("I am the child's parent, my process ID is %d\n",getppid());
		sleep(30);
		printf("\nAfter sleep\nI am the child, my process ID is %d\n",getpid());
                printf("I am the child's parent, my process ID is %d\n",getppid());
		printf("Again going to sleep for 10 secs");
		sleep(10);
	}
	else
	{
		sleep(20);
		printf("I am the parent, my process ID is %d\n",getpid());
                printf("The parent's parent, my process ID is %d\n",getppid());
		printf("Parent terminates\n");
	}
}
