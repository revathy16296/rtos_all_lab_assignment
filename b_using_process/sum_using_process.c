#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int array[10],i;
float sum_of_num();
float product_of_num();

int main()
{
	int pid;
	printf("enter the 10 values to be calculated\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	pid=fork();
	if (pid==0)
	{
		printf("inside child-----\n");
		float product,sum;
		sum=sum_of_num();
		printf("the sum is %f\n",sum);
		product=product_of_num();
		printf("the product is %f\n",product);		
	}
	else
	{
		wait(NULL);
		printf("-----inside parent process------\n");
	}
	return 0;
}
	
		
	float product_of_num()
{
	float product=1;
	for(i=0;i<10;i++)
	{
		product*=array[i];
	}
	return product;
}


float sum_of_num()
{
	float sum=0;
	for(i=0;i<10;i++)
	{
		sum+=array[i];
	}
	return sum;
}