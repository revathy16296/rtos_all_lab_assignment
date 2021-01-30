/* explore on scanf gets and fgets*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

int main()
{
char s[SIZE];
printf("enter the string\n");
fgets(s,sizeof(s),stdin);
printf("scaned with fgets %s\n",b);
return 0;
}