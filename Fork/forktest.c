#include<stdio.h>

/*
Program to demonstrate the fork process
*/

int main()
{
	int i,pid;
	i = 10;
	printf("Before fork i is %d\n",i);
	pid = fork();
	if(pid==0)
	{
		printf("In child i's address is %u\n",&i);
		i=20;
		printf("i in child is %d\n",i);
	}
	else
	{
		printf("In parent, i's address is %u\n",&i);
		printf("In parent i is %d\n",i);
	}

}
