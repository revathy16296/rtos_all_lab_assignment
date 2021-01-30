#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<errno.h>


int sum_of_digits(int x);

int main(int argc,char *argv[])

{
int pid,a,b,s,start,end,fd1[2],fd2[2];/*a&b are the entered number by user,s=sum in main function,start and end used for the range in parent and chilld*/
if (argc<4)
a= atoi(argv[1]);
b= atoi(argv[2]);
pipe(fd1);
pipe(fd2);
pid=fork();


if (pid==0)/*inside child*/
{
printf("inside child\n");/*half value will done in child process*/
close(fd1[1]);/*closing reading*/
read(fd1[0],&a,1);
read(fd1[0],&b,1);
while(a<=b)/*find the number with sum =8*/
{
int rem,sum=0;
while (a!=0)
{
rem=a%10;
sum=sum+rem;
a=a/10;

if (sum==8)
{array[i]=a;
i++;}

a=a+1;
}


}
}
else
{
	wait(NULL);/*another half will done in parent process*/
	printf("inside parent\n");
	close(fd2[0]);
	write(fd2[1],&sum,1);
}return 0;

}
