#include<stdio.h>
#include<sys/wait.h>

// Program to demonstrate how orpahn processes are created

void err_sys(const char* x) 
{ 
    perror(x); 
    exit(1); 
}

int main(void)
{
	pid_t pid;
	if((pid = fork()) < 0) {
		err_sys("fork error");
	}else if( pid == 0){
		if((pid = fork()) < 0){
			err_sys("fork error");
		}else if(pid > 0){
			exit(0);
		}
		sleep(10);
		printf("second child, parent pid = %ld\n",(long)getppid());
		exit(0);
	}
	if(waitpid(pid,NULL,0) != pid){
		err_sys("waitpid error");
	}
	exit(0);
}
