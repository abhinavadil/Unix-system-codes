#include<stdio.h>
int main(int argc,char *argv[],char **env)
{
	int i=0;
	while(*env !=NULL)
	{
		i++;
		printf("\n env var %d=%s",i,*(env++));
	}
	printf("\n");
	return 0;
}

