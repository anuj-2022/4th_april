#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_mutex_t l;

void* test_1(void *data)
{
	pthread_mutex_lock(&l);
	static int i=0;
//	i=data;
	printf("data %d\n",data);
	for(i=0;i<data;i++)
	{
	printf("in thread 1 %d\n",i);
	sleep(1);
	}
	pthread_mutex_unlock(&l);
}

void* test_2(void *data1)
{
	pthread_mutex_lock(&l);
	static int s=0;
	printf("data2 %d\n",data1);
	for(s=0;s<data1;s++)
	{
	printf("in thread 2 %d\n",s);
	sleep(1);
	}
	pthread_mutex_unlock(&l);
}




int main()
{
	pthread_mutex_init(&l,NULL);
	pthread_t thread_1,thread_2;
	int n;
	printf("Enter the count for loop\n");
	scanf("%d",&n);
	pthread_create(&thread_1,NULL,test_1,n);
	pthread_create(&thread_2,NULL,test_2,n);
	pthread_join(thread_1,NULL);
	pthread_join(thread_2,NULL);
	return 0;
}
