#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<errno.h>

int sum_of_digits(int x);

int main(int argc,char *argv[])

{
int pid,a,b,s,start,end;/*a&b are the entered number by user,s=sum in main function,start and end used for the range in parent and chilld*/
if (argc<4)
a= atoi(argv[1]);
b= atoi(argv[2]);
pid=fork();


if (pid==0)/*inside child*/
{
printf("inside child\n");/*half value will done in child process*/
start=a;
end=a+((b-a)/2);}
else
{
	wait(NULL);/*another half will done in parent process*/
	printf("inside parent\n");
	start =a+((b-a)/2);
	end=b;
}
while(start<=end)/*find the number with sum =8*/
{
s=sum_of_digits(start);
if (s==8)
{printf("%d\n",start);}

start=start+1;
}
return 0;
}


int sum_of_digits(int x)
{
int rem,sum=0;
while (x!=0)
{
rem=x%10;
sum=sum+rem;
x=x/10;
}

return sum;
}
