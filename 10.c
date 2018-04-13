#include <stdio.h>      
#include <setjmp.h>    

int main()
{
  jmp_buf env;
  int retval;

  retval=setjmp(env);

  printf ("val is %d\n",retval);

  if (retval) longjmp(env, 1);

  return 0;
}

