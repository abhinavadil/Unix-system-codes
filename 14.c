#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main( int argc, char *argv[], char *env[] ) 
{
   int a=10;
   system("clear");
     
   fork();
   a++; 
   printf("%d\n",a);
}


