#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int var=1;
pthread_mutex_t l;
void* fun_1(void *data);
void* fun_2(void *data);

int main()
{
	pthread_mutex_init(&l,NULL);
	pthread_t thread_1,thread_2;
	int ret_1,ret_2,n;
	printf("Enter the data limit \n");
	scanf("%d",&n);
	ret_1=pthread_create(&thread_1,NULL,fun_1,n);
	if(ret_1 == 0)
		printf("Thread created\n");
	else
		printf("failed to create thread");
	ret_2=pthread_create(&thread_2,NULL,fun_2,n);
	if(ret_1 == 0)
                printf("Thread created\n");
        else
                printf("failed to create thread");
	pthread_join(thread_1,NULL);
	pthread_join(thread_2,NULL);

	return 0;
}

void* fun_1(void *data)
{
	pthread_mutex_lock(&l);
	int i=0;
	for(i;i<data;i++)
	printf("in fun_1 ****************************************************value is %d\n",var++);
	pthread_mutex_unlock(&l);
}

void* fun_2(void *data)
{
	pthread_mutex_lock(&l);
        int i=0;
        for(i;i<data;i++)
        printf("in fun_2 ####################################################################################### value is %d\n",var++);
	pthread_mutex_unlock(&l);
}
