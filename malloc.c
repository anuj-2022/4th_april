#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    int *p;
    p=(int*)calloc(5*sizeof(int));
   // p=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++)
    printf("Addreaa of %d Block %d\n",i,&p[i]);
    free(p);
    return 0;
}

