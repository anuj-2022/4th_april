#include <stdio.h>
#include<pthread.h>
//extern int a

void* print(void *data)
{
    printf("Hello world\n");
}
int main()
{
    pthread_t th1,th2; 
    pthread_create(&th1,NULL,print,NULL);
    pthread_create(&th2,NULL,print,NULL);
//    pthread_join(&th1,NULL);
//    pthread_join(&th2,NULL);
        

    return 0;
}

