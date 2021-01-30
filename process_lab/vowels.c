#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/wait.h>
#include <stdio.h>

 

int main(int argc,char* argv[])
{

int p[2],pid,vowels;
if(pipe(p)<0)/*piping fails*/
return 1;
pid=fork();/*child process created*/
if(pid==-1)
{
printf("can't fork,error\n");/*child creation fails*/
return 2;
}
else
if(pid==0)
{
close(p[0]);
 vowels=0;
printf("inside child process with pid = %u\n",getpid());
fflush(stdout);
for(int i=1;i<argc;i++)/*checking vowels in argument*/
for(int j=0;argv[i][j]!='\0';j++)
{
if(argv[i][j]=='a' || argv[i][j]=='e' || argv[i][j]=='i' || argv[i][j]=='o' || argv[i][j]=='u' || argv[i][j]=='A' ||
argv[i][j]=='E' || argv[i][j]=='I' || argv[i][j]=='O' || argv[i][j]=='U')
vowels++;
}
write(p[1],&vowels,sizeof(vowels));//writing to the parent//
close(p[1]);/*closing writing*/
exit(2);
}
else
{
close(p[1]);/*not writing in parent*/
 vowels;
 wait(NULL);
printf("inside Parent process with id=%d\n",getpid());

read(p[0],&vowels,sizeof(vowels));/*reading from child*/
close(p[0]);
printf("vowel count  is %d\n",vowels);
exit(2);
}
}
