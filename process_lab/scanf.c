/* explore on scanf gets and fgets*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main()
{
char s[SIZE];
printf("enter the string\n");
scanf("%s",s);
printf("scaned with scanf %s\n",s);
return 0;
}
