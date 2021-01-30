/*using thread*/
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include<unistd.h>
#define SIZE 20

int num1,num2,i,j;
pthread_mutex_t mutex;//to complete the ongoing thread.

typedef struct arr{
	int array1[SIZE],array2[SIZE];
	int thread_num;
}ar;
void* replace_elements(void* p);
int main()
{
	ar thread_data[2];
	
	printf("enter the size of array 1 and array 2\n");
	scanf("%d%d",&num1,&num2);
	printf("enter the first array elements\n");
	
	for(i=0;i<num1;i++)
	{
		scanf("%d",&thread_data[0].array1[i]);
	}
	printf("enter the second array elements\n");
	for(i=0;i<num2;i++)
	{
		scanf("%d",&thread_data[0].array2[i]);
		
	}
	/*initialising the thread variables*/
	
    thread_data[0].thread_num = 0;
    thread_data[1].thread_num = 1;
	for(i=0;i<SIZE;i++)
	{
    thread_data[1].array1[i] = thread_data[0].array1[i];
	thread_data[1].array2[i] =thread_data[0].array2[i];
	}
	
	//created 2 threads
	pthread_t thread1, thread2;

	pthread_create(&thread1, NULL, replace_elements, &thread_data[0]);
	pthread_create(&thread2, NULL, replace_elements, &thread_data[1]);
	
	pthread_join(thread1,NULL);
	pthread_join (thread2,NULL);
	
	pthread_mutex_destroy(&mutex);
	
	return 0;
}
 
void* replace_elements(void* p)
{
	ar* ptr = (ar*)p;
	int n = ptr->thread_num;
	//int buf[SIZE];
	if(n==0)
	{
		pthread_mutex_lock(&mutex);
		printf("\ncurrently in thread 0\n");
	for(i=0;i<num1;i++)
	{
		if(i%2==0){
		printf("%d\t",ptr->array2[i]);}
		else{
		printf("%d\t",ptr->array1[i]);
		
		}
		
	}
	pthread_mutex_unlock(&mutex);
	}
	else
	{
	printf("\n currently in thread 1\n");
	for(i=0;i<num2;i++)
	{
		if(i%2!=0){
		printf("%d\t",ptr->array2[i]);}
		else{
		printf("%d\t",ptr->array1[i]);
		}
		
	}
	}
pthread_exit(NULL);	
}
