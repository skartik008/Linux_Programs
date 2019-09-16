#include<stdio.h>
#include<unistd.h>

/*
This program demonstrates the number of zombies that can be created in a system
*/

void main(){
	int count=0;
	while(fork()>0){
		count++;
		printf("%d\t",count);
	}
}
