#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[])
{

int pid,r;
pid=fork();/*child process created*/
	if(pid<0){
    printf("pid creation failed");}
else if (pid==0)

	{
    printf("inside child process with pid=%d\n",getpid());
	r=system("ls");/*the list is created and showing the list*/
	return r;
     }


else{
sleep (2);/*in parent process and make it sleep for 2 s*/
}}
