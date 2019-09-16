#include <stdio.h> 
#include <sys/types.h> 

/*
Program to show how many child processes are created
*/

int main() 
{ 
    fork(); 
    fork(); 
    fork(); 
    printf("hello\n"); 
    return 0; 
} 
