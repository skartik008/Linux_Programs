#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

/*
This program is to create a message queue
*/

int main()
{
	int msqid;
	
	msqid = msgget((key_t)10,IPC_CREAT);
	printf("Message queue successfully created with %d\n",msqid);
	return 0;
}
