# include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>

#define SIZE 10

int main(int argc,char *argv[])
{
	int pid;
	char s[]={"aeiouAEIOU"};
	
	pid=fork();
	if (pid<0)
	{
		printf("the child creation failed");
	}
	else if(pid==0)
	{
		printf("inside child with pid no: %d\n",getpid());
			
	}
else
{
	wait(NULL);
}
char a[SIZE];
		a==argv[1];
                fgets(a,sizeof(a),stdin);
		char c;
		int n,i,j,count=0;
		n=strlen(a);
		for(i=0;i<n;i++)
		{
		  c=a[i];
		  for(j=0;j<10;i++)
		  {
		        if(c==s[j])
		         printf("%c",c);
			 ++count;
			  }
		}
		printf("\ncount=%d\n",count);
return 0;
}


