#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char **argv,char *envp[])
{

	char *oldenv = strdup(getenv("PATH"));
	putenv("ABBHINA=afafafa");
	printf("ABBHINA=%s\n",getenv("ABBHINA"));

	unsetenv("ABBHINA");
	printf("ABBHINA=%s\n",getenv("ABBHINA"));
		
	setenv("PATH","/home/abhinav/Desktop/usp2",1);
	system("echo $PATH");
	system("cat a");
	printf("\n");
}







