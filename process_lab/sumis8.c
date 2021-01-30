#include<stdio.h>
#include<stdlib.h>
int sum_of_digits(int x);

int main(int argc,char *argv[])
{
int a,b,s;
if (argc<4)
a= atoi(argv[1]);
b= atoi(argv[2]);
while(a<=b)
{
s=sum_of_digits(a);
if (s==8)
{printf("%d\n",a);}

a=a+1;
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
