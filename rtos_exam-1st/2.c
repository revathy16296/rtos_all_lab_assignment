#include<stdio.h>
#include<string.h>
#define SIZE 20
int main()
{
	char s[20];
	printf("enter the string to be reversed \n");
	fgets(s,sizeof(s),stdin);
	int n,j,i;
	n=strlen(s);
	j=n;
	char p[j];
	for(i=n-1;i>=0;i--)
	{
	printf("%c",s[i]);
}}
	
	