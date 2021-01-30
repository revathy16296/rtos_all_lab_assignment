#include<stdio.h>
#define SIZE 20
int i,an,bn;

	
void replace_the_values(int a[SIZE],int b[SIZE]);
void insert_values(int a[SIZE],int b[SIZE]);
int main()
{
	int a[SIZE], b[SIZE],c[SIZE];
	printf("enter the number of elements in array 'a'\n");
	scanf("%d",&an);
	printf("enter the elemnts in array\t");
	for(i=0;i<an;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number of elements in array 'b'\n");
	scanf("%d",&bn);
	printf("enter the elemnts in array\t");
	for(i=0;i<bn;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<an;i++)
	{
		c[i]=a[i];
	}
	
	replace_the_values(a,b);
	insert_values(c,b);
	return 0;
}
	
	
	
void replace_the_values(int d[SIZE],int e[SIZE])
{
	int j=1;
	
	for(i=0;i<bn;i++)
	{
		if(i%2==0)
		{
			d[j]=e[i];
		}
	j=j+1;	
	}
	printf("the new sorted array\n");
	for (i=0;i<an;i++)
	{
		printf("\n%d\t",d[i]);
	}
}

void insert_values(int c[SIZE],int b[SIZE])
{
	int buf[15];
	for(i=0;i<=((an/2)+bn);i++)
	{
		if(i<=((an-1)/2))
		{
		buf[i]=*c;
		*c++;
		}
		else
		{
			buf[i]=*b;
			*b++;
		}
		printf("%d\t",buf[i]);
	}
}
		
	
	
			