#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main() 
{
        pid_t pid,ppid;
	gid_t gid,geid;
        uid_t ruid,euid;

	pid  = getpid();
	ppid = getppid();
	gid  = getgid();
        ruid = getuid();
        euid = geteuid();
        geid = getegid();

	printf("Process ID: %d\n",pid);	
	printf("Process Parent ID: %d\n",ppid);	

	printf("Process Real UID: %d\n",ruid);	
	printf("Process Effective UID: %d\n",euid);
	
        printf("Process Group ID: %d\n",gid);
	printf("Process Effective Group ID: %d\n",geid);
        return 0;
}	
