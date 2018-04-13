#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main( int argc, char *argv[], char *env[] )
{
   pid_t my_pid, parent_pid, child_pid;
   int status;
   system("clear");
   my_pid = getpid();    
   printf("Parent: my pid is %d\n", my_pid);

   if((child_pid = fork()) < 0 )
   {
      perror("fork failure");
      exit(1);
   }


   if(child_pid == 0)
   {  printf("\n\nThis is from the Child process\n");
      my_pid = getpid();   
      parent_pid = getppid();
      printf("Child: my pid is: %d\n", my_pid);
      printf("Child: my parent's pid is: %d\n", parent_pid);
      _exit(1);
   }
   else
   {  printf("\n\nThis is from the Parent  process");
      printf("\nParent: my parent's pid is %d", getppid());
      printf("\nParent: I created a child process.");
      printf("\nParent: my child's pid is: %d", child_pid);
   }
   printf("\nEnd of Program");
   return 0;
}

