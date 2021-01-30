#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20
void combine_fn(char s1[SIZE],char s2[SIZE]);
void insert_elem(char s1[SIZE],char s2[SIZE]);
void odd_and_even(char s1[SIZE]);
int main()

{
	char s1[SIZE]="abcdefghij";
	char s2[SIZE]="klmno";
	combine_fn(s1,s2);
	odd_and_even(s1);
	insert_elem(s1,s2);
	return 0;
}
void combine_fn(char s1[SIZE],char s2[SIZE])
{
char s3[SIZE];
int i=0,j=0;
while (s1[i] != '\0')
{
	s3[j]=s1[i];
	i++;
	j++;
}
i=0;
while (s2[i] != '\0')
{
	s3[j]=s2[i];
	i++;
	j++;
}
printf("the concatinated string is %s,\n",s3);
}

void insert_elem(char s1[SIZE],char s2[SIZE])
{
	int i=0;
	char s3[SIZE];
	strcpy(s3,s1);
	while(s2[i]!='\0')
	{
		s3[i+5]=s2[i];
		i++;
	}
	printf("the modified string by putting values from second string is %s\n",s3);
}

void odd_and_even(char s1[SIZE])
{
	int odd=0,even=0;
	int i;
	for(i=0;i<SIZE;i++)
	{
		if(i%2==0)
		even+=i;
		else
		odd+=i;
	}
	printf("\nthe odd index sum = %d\n",odd);
	printf("the even index sum = %d\n",even);
}

		

	
	