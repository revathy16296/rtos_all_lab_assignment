#include<stdio.h>
#define SIZE 20
int m,n,i;

void replace(int a[SIZE],int b[SIZE]);
void insert(int a[SIZE],int b[SIZE]);

int main()
{
int a[SIZE],b[SIZE];
printf("enter the size of array 1 and array 2\n");
scanf("%d%d",&n,&m);
printf("enter the first array elements\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the second array elements\n");
for(i=0;i<m;i++)
{
	scanf("%d",&b[i]);
}
printf("replace the array---------\n");
replace(a,b);
printf("inserted the elements------------\n");
insert(a,b);
return 0;
}

void replace(int a[SIZE],int b[SIZE])
{
	int buf[SIZE];
	for(i=0;i<n;i++)
	{
		if(i%2==0){
		buf[i]=b[i];}
		else{
			buf[i]=a[i];
		}
		printf("%d\t",buf[i]);
	}
}

void insert(int a[SIZE],int b[SIZE])
{
	int buf[SIZE],p;
	p=(n)/2;
	for(i=0;i<(p+m);i++)
	{
		if(i<(p))
		{
		buf[i]=*a;
		*a++;
		}
		else
		{
			buf[i]=*b;
			*b++;
		}
		printf("\n%d\t",buf[i]);
	}
}
	

	
			

	

