#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
#include<errno.h>

int check_armstrong(int n);

int main()
{
	int pid,number,p1[2],m,p[2],ret;
	pipe(p);
	pipe(p1);
	
	printf("inside parent\n");
	printf("enter the number to be check whether armstrong or not :\n");
	scanf("%d",&number);
	m=check_armstrong(number);
	if(m==1)
	{
		pid=fork();
		if(pid>0)
		{
		printf("the number is armstrong\n");
		close(p[0]);
		write(p[1],&number,sizeof(number));
		close(p[1]);
		wait(NULL);
		printf("back to parent\n");
		close(p1[1]);
		read(p1[0],&ret,sizeof(ret));
		close(p1[0]);
		printf("the number get from the child is %d\n",ret);
	}
	else if(pid==0)
	{   
		int a,b;
		printf("inside child\n");
		close(p[1]);
		read(p[0],&a,sizeof(int));
		close(p[0]);
		b=a*a;
		close(p1[0]);
		write(p1[1],&b,sizeof(b));
		close(p1[1]);
	}
	else{
		return 1;
	}
	}
	else{
		printf("the number is not armstrong");
		return 2;
	}
	
	
		
	
	return 0;
}	
	
int check_armstrong(int n)
{
	int k,sum=0,org;
	org=n;
	while((n)!=0)
	{
		k=n%10;
		sum=sum+(k*k*k);
		//printf("sum : %d\n",sum);
		n=n/10;
	}
	if(org==sum)
	{
		return 1;
	}
	else{
		return 0;
	}
}
	