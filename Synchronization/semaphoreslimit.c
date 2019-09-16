#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>

/*
Program to see the total number of sempahores that can be created in a system
*/

int main()
{
	int semid,nsemset,nsem,flag,key;
	nsem = 1;
	flag = 0666 | IPC_CREAT;
	for(nsemset =0;nsemset<10;nsemset++)
	{
		key = (key_t)nsemset;
		semid = semget(key,nsem,flag);
		if(semid>0)
		{
			printf("\nCreated Semaphore with ID: %d\n",semid);
		}
		else
		{
			printf("Maximum number of semaphore set are %d\n",nsemset);
			exit(0);
		}
	}
	return 0;
}
