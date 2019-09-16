#include<stdio.h>
#include<fcntl.h>

/*
This program demonstrates how fork works, how files are stored in buffer
*/

void main()
{
	char *p = "Google Amazon Facebook";
	FILE *fp;
	fp=fopen("tamper.txt","w");
	fwrite(p,22,1,fp);
	fork();
}
