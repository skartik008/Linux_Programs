#include<stdio.h>

/*
This program demonstrates the linux time slicing to execute processes, the switcing between processes
*/

int main()
{
	int i=0,j=0,pid;
	pid=fork();
	if(pid==0)
	{
		for(i=0;i<25000;i++)
		{
			printf("C");
		}
	}
	else
	{
		//wait(0);
		for(j=0;j<25000;j++)
		{
			printf("P");
		}
	}
	return 0;
}
