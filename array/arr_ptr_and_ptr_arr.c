#include<stdio.h>
/*pointer to an  array is called array potr*/
int main()
{
int b[5]={1,2,3,5,6};
int (*ptr)[5];
ptr=&b;
int i;
printf("array pointer elements are\n");
for(i=0;i<5;i++)
{
printf("%d\n",*(*ptr+i));
}
/*pointer array*/
int *a[5];
for(i=0;i<5;i++)
{
a[i]=&b[i];}
printf("using pointer array \n");
for(i=0;i<5;i++)
{
printf("%d\t",*a[i]);
}
return 0;
}
