#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>

/*
This program is part of 2 programs to demonstrate the file locking system part 2
*/

int main()
{
	int fd,i,j;
	fd = open("test1.txt", O_WRONLY | O_CREAT | O_APPEND,0777);
	//lockf(fd,F_LOCK,0);
	sleep(30);
	for(i=0;i<60000;i++)
	{
		write(fd,"B",1);
	}
	for(i=0;i<60000;i++)
	{
		write(fd,"B",1);
	}
	for(i=0;i<60000;i++)
	{
		write(fd,"B",1);
	}
	return 0;
}

