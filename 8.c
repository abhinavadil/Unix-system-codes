#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*	char *h="HOME=/home/abhinav/Desktop/usp2";
	putenv(h);
	printf("HOME=%s",getenv("HOME"));
	return 0;
	*/
	char *h= "A=123";
	
	putenv(h);

	printf("A = %s",getenv("A"));
}
