#include<stdio.h>
#include<stdlib.h>

void fun(void *ip)
{
	printf("value %d\n",(int*)ip);
}

int main()
{
	int *p=15;
//	*p=10;
	fun(p);
	return 0;
}

