#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>

/*
Program to create a semaphore
*/

int main()
{
	int semid,key,nsem,flag;
	key = (key_t)0X20;
	nsem = 1;
	flag = IPC_CREAT | 0666;
	semid=semget(key,nsem,flag);
	printf("Created semaphore with ID: %d\n",semid);
	return 0;
}
