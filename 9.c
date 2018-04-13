#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
 
jmp_buf resume_here;
void hello(void);
 
int main(void)
{
    int ret_val;
 
    if (ret_val=setjmp(resume_here)) // this will return 0 as the argument has no 2nd parameter therefore else will be executed. 
   {
        printf("After longjump()  back in main() \n");
        printf("Return Value: %d\n",ret_val); //it will print 1 then -1,100 accordingly
        printf("jump buffer variable resume_here \n");;
    }
    else {
        printf("setjmp() returns first time\n");
        printf("Return Value: %d\n\n\n\n",ret_val);
        hello();
    }
    return 0;
}
 
void hello(void)
{
    printf("This Hello routine\n");
    longjmp(resume_here, 100);//this will return 1 and goto if stmt and execute the if part and then return 0;prgm ends
 				// here the value can be anything suppose we put-1 or 100,it will return the same.
    printf("can't be reached here because I did longjmp!\n");
}
