#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/wait.h>
#include<sys/ipc.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>

int main(){
	int key,shmid;
	int* shmptr;
	int num,k;
	key=1234;
	printf("inside client\n");
	printf("enter the number\n");
	scanf("%d",&num);
	shmid=shmget(key,4*sizeof(int),IPC_CREAT|0666);
	shmptr=(int *)shmat(shmid,NULL,0);
    shmptr[0]=num;
	shmptr[1]=1;
	while(shmptr[3]!=2){
	sleep(1);}
	k=shmptr[2];
	printf("number get from server is %d",k);
	shmptr[3]=1;
	return 0;
}
	