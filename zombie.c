#include<stdio.h>
#include<unistd.h>

/*
Program to create a zombie process
*/

int main()
{
	if(fork()>0)
	{
		printf("Parent");
		sleep(120);
	}
	return 0;
}

