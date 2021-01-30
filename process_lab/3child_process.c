#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
int pid0,pid1,pid2;

pid0=fork();/*first child */
if (pid0==0)
 {
 sleep(3);/*to complete and close other two*/
 printf("the first child pid is %d and parent id is %d\n",getpid(),getppid());
 }
else
{
pid1=fork();

  if (pid1==0)
  {sleep(2);
  printf("the second child pid is %d and parent id is %d\n",getpid(),getppid());
  }
  else 
   {
 pid2=fork();
   
    if (pid2==0)/*will close first*/
   {   printf("the third child pid is %d and parent id is %d\n",getpid(),getppid());}
    else
      {
      sleep(4);
      printf("the parent pid %d\n ",getpid());
      }
    }
  }
return 0;
}
