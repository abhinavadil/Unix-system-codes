#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main( int argc, char *argv[], char *env[] ) 
{
   system("clear");
     
   fork();
   printf("Hello");
   
printf("Hello from the Process %d\n Parent Process Id:%d\n",getpid(),getppid());
printf("hello");

}


