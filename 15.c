#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

int main() 
{
   int pid = fork();

   if (pid == 0) {
       printf("Child Process pid: %d \n parent id: %d \n", getpid(), getppid());
   }
   else {
       printf("Parent Process pid: %d \n parent id: %d.\n", getpid(), getppid());
   }
return 0;
}

	//child process pid 0,231
	//parent process 231,3232
