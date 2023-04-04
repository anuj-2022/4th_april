#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>


int var=1;
sem_t a;

void* fun_1(void *d);
void* fun_2(void *d);

int main()
{
	sem_init(&a,0,2);
	pthread_t thread_1,thread_2;
	int ret_1,ret_2,n;
	printf("Enter the value\n");
	scanf("%d",&n);
	ret_1=pthread_create(&thread_1,NULL,fun_1,n);
	ret_2=pthread_create(&thread_2,NULL,fun_2,n);
	if((ret_1 && ret_2)==0)
		printf("Both thread created successfully\n");
	else 
		printf("Failed to create the thread\n");
	pthread_join(thread_1,NULL);
	pthread_join(thread_2,NULL);
	printf("Process Completed\n");

	return 0;
}

void* fun_1(void *d)
{
	sem_wait(&a);
	int i;
	for(i=0;i<d;i++)
	{
		printf("the fun_1 ***************** %d\n",var++);
		sleep(1);
	}
	sem_post(&a);
}

void* fun_2(void *d)
{
        sem_wait(&a);
        int i;
        for(i=0;i<d;i++)
        {
                printf("the fun_2 #################### %d\n",var++);
                sleep(1);
        }
        sem_post(&a);
}
