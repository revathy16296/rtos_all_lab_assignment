#include<stdio.h>
#include<stdlib.h>
#define SIZE 15
int i;
void conc_fn(int a1[SIZE],int a2[SIZE]);
void insert_elements(int a1[SIZE],int a2[SIZE]);
void odd_and_even(int array[SIZE]);
int main()
{
	int a1[SIZE]={1,2,3,4,5,6,7,8,9,10};
	int a2[SIZE]={11,12,13,14,15};
	conc_fn(a1,a2);
	insert_elements(a1,a2);
	odd_and_even(a1);
	return 0;
}



void conc_fn(int a1[SIZE],int a2[SIZE])
{
		for (i=0;i<5;i++)
	{
		a1[i+10]=a2[i];
	}

printf("the new array after concatination is \n ");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t",a1[i]);
	}
}


void insert_elements(int a1[SIZE],int a2[SIZE])
{
int array[SIZE];
for(i=0;i<SIZE;i++){
array[i]=a1[i];}
	for (i=0;i<5;i++)
	{
		array[i+5]=a2[i];
	}
	printf("\nthe new array  after inserting elements from the 2nd array is \n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",array[i]);
	}
}


void odd_and_even(int array[SIZE])
{
	int odd_sum=0,even_sum=0;
	for (i=0;i<10;i++)
	{
		if ((i%2)==0)
		{
			even_sum+=array[i];
		}
		else {
			odd_sum+=array[i];
		}
	}
	printf("\nthe even indexes sum is %d",even_sum);
	printf("\nthe odd indexes sum is %d",odd_sum);
}
