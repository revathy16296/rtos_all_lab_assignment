#include<stdio.h>
#include<dirent.h>
int main()
{
struct dirent *de;
int n=0;
DIR *dr =opendir(".");
if (dr==NULL)
{ printf("opening directory fails\n");
return 0;
}
while ((de= readdir(dr))!=NULL)
{n=n+1;
printf("%s\n",de->d_name);
}
closedir(dr);
printf("the no of files are %d",n);
return 0;
}
