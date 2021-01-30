#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	char words[15];
	memset(words,0,sizeof(words));
	char ch;
	int wrd=0,i=0;
	FILE *fp,*fpe,*fpo;
	fp=fopen("input.txt","r");
	fpe=fopen("even.txt","w+");
	fpo=fopen("odd.txt","w+");

	while ((ch = fgetc(fp)) != EOF)
	{
	if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0'||ch=='.')
	{
		wrd++;
		if((wrd%2)==0)
		{
			fprintf(fpe,"%s\n",words);
			//printf("even words :%s\n",words);
		}
		else
		{
			fprintf(fpo,"%s\n",words);
			//printf("odd words :%s\n",words);
	}
	memset(words,0,sizeof(words));
	i=0;
	}
	else
	{
	words[i]=ch;
	i=i+1;
	}
	}
fclose(fp);
fclose(fpo);
fclose(fpe);


printf("even file opening-----\n");
fpe=fopen("even.txt","r");
while (fgets(words,sizeof(words),fpe)!=NULL)
{
	printf("\t%s",words);
}
fclose(fpe);

printf("odd file opening-----\n");
fpo=fopen("odd.txt","r");
while (fgets(words,sizeof(words),fpo)!=NULL)
{
	printf("\t%s",words);
}
fclose(fpo);
return 0;
}

