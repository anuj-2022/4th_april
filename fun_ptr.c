#include<stdio.h>
#include<stdlib.h>

void sum(int a,int b)
{
	printf("The addition is %d\n",a+b);
}


int main()
{
//	int a,b;
	void (*fun)(int,int);
	fun=sum;
	fun(100,300);
	return 0;
}
