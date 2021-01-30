#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/mman.h>
#include<sys/ipc.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>

int main()
{
	int key,shmid;
	int* shmptr;
	int num,get,k;
	key=1234;
	printf("inside the server\n");
	shmid=shmget(key,4*sizeof(int),IPC_CREAT|0666);
	shmptr=(int*)shmat(shmid,NULL,0);
	shmptr[1]=0;
	shmptr[3]=0;
	while(shmptr[1]!=1)
	sleep(1);
	get=shmptr[0];
	k=get*get;
	
	printf("the square of number from client is %d\n",(k));
	printf("send back to client\n");
	shmptr[2]=k;
	shmptr[3]=2;
	while (shmptr[3]!=1);
	sleep(1);
	shmdt((void*)shmptr);
	shmctl(shmid,IPC_RMID,0);
	return 0;
}

	
	
	