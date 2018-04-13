#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void exitt()
	{
		printf("this is the end of exection");
		exit(100);
	}

int main()
{
	printf("this is the first line\n");
	int i=10;
	if(i>1)
	{
		printf("now this will exit\n");
		atexit(exitt);
	}
	else 
			printf("unsucessfull");
	printf("Bye");
	return 0;
}


