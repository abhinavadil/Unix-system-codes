#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void exitt1()
{
	printf("this the end of execution1\n");
}
void exitt2()
{
	printf("this the end of execution2\n");
}

int main()
{
	printf("this is the first line\n");
	atexit(exitt1);
	atexit(exitt2);
	exit(0);
}


