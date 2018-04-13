#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>

int  main()
{
  int i;
  int status;
  pid_t pid;
  int a,b,c;
  status = 1;
  pid = fork();
  if (pid < 0)
  {
     perror("Error: ");
  }
  else if(pid > 0)
  {
     c=a+b;
     printf("c=%d",c);
  }
  else if (pid == 0)
  {
     a=10;
     b=20; 
  } 
  return 0;
}
