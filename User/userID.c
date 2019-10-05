#include<stdio.h>
#include<stdlib.h>
// Program to print the user ID and group ID
int main()
{
	printf("uid = %d, gid = %d\n", getuid(),getgid());
	exit(0);
}
