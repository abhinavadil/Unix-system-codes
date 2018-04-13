#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<string.h>

int  main()
{
  int i;
  int status;
  pid_t pid;

  i = 0;
  status = 1;
  pid = fork();
  if (pid < 0)
  {
     perror("Error: ");
  }
  else if (pid > 0)
  { 
      printf("\n===== Begin Parent =====\n\n");
      printf("getpid() = %d\n", getpid());
      while(i<10)
      {
          ++i;
          printf("Parent: i=%d \n",i);
      }
  }
  else
  {
      printf("\n===== Begin Child =====\n\n");
      printf("getpid() = %d\n", getpid());
      while (i < 10)
      {
          ++i;
          printf("Child: i=%d \n",i);
      }
  }
  printf("status = %d\n", status);
  printf("===== End =====\n\n");
  return 0;
}
