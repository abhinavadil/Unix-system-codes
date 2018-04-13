#include<stdio.h>
int main(int argc,char *argv[],char *envp[])

{         int i=0;
	while(*envp)
{
	i++;
	printf("\n %d env var %s",i,*envp++);

}
printf("\n");
	return 0;
}
