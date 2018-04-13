#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
  int i; 
  pid_t pid;
  i = 5;
  printf("%d\n", i);
  pid = fork();
  printf("%d\n",i);
  if (pid > 0)
  {
     printf("I am parent%d\n",getpid());
     i = 6;
  }
  else if(pid == 0)
  {
     printf("I am child %d\n",getpid());
     i = 4;
  }
  printf("%d\n", i);
	return 0;
}

