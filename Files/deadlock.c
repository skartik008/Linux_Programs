#include<fcntl.h>
#include<unistd.h>

/*
This program demonstrates the 4 conditions because of which deadlock happens
*/

int main()
{

	int fd, pid;
	fd=open("test.txt",O_RDWR);
	lockf(fd,F_LOCK,10);
	printf("Parent locked the file\n");
	pid=fork();
	if(pid == 0)
	{
		lockf(fd,F_LOCK,10);
		printf("Child process over\n");
	}
	else
	{
		wait(0);
		printf("Parent process over");
	}
	return 0;
}
