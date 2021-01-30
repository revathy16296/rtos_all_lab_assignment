/*push and pop operartion in an array*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 15
int top=0,i;
int *stack[SIZE];
void conc_fn(int a1[SIZE],int a2[SIZE]);
int push(int *a3[SIZE]);
int pop( int *a4[SIZE],int *a5[SIZE]);
void display();
int main()
{
	int a1[SIZE]={1,2,3,4,5,6,7,8,9,10};
	int a2[SIZE]={11,12,13,14,15};
	conc_fn(a1,a2);
	int *a4[SIZE],*a5[SIZE];
	int *a3[SIZE];
	for(i=0;i<SIZE;i++)
	{
		a3[i]=&a1[i];
	}
	printf("\n#######---#####\npushing the array elements\n");
	push(a3);
	printf("\n######----#####\ndisplaying the current stack\n");
	display();
	printf("\n ########----####\npoping the elements\n");
	pop(a4,a5);
	printf("the first array \n");
	for(i=0;i<5;i++)
	{
	printf("%d\t",*a4[i]);
	}
	printf("\nthe poped 2nd array \n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*a5[i]);
	}
	return 0;
}
	
	
void conc_fn(int a1[SIZE],int a2[SIZE])
{
		for (i=0;i<5;i++)
	{
		a1[i+10]=a2[i];
	}
}


int push(int *a3[SIZE])
{
	printf("current top= %d \n",top);
	i=0;
	if (top==(SIZE))
	printf("the stack is full\n");
		else {
			while(top<(SIZE))
			{
			stack[top]=a3[i];
			i++;
			top++;
			}
			}
	printf("the pushed value are : \t");
	for(i=0;i<SIZE;i++)
	{
	printf("%d\t",*stack[i]);
	}
	
	return 0;
}
			


void display()
{
	printf("the top after push %d\n",top);
	int n=top;
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",*stack[i]);
	
	}
}

int pop( int *a4[SIZE],int *a5[SIZE])
{
	top=top-1;
	if(top==0)
	{printf("the stack is empty\n");}
	for(i=0;i<5;i++)
	{
		a4[i]=stack[top];
		top--;
	}
	for(i=0;i<10;i++)
	{
		a5[i]=stack[top];
		top--;
	}
	return 0;
}
	