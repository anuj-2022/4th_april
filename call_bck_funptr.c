#include<stdio.h>
#include<stdlib.h>

void call(int c)
{
	printf("multiply a*5=%d:\n",c*5);
}

void sum(void (*call)(int),int a,int b)
{
	printf("In my Function add %d:\n",a+b);
	call(a);
}
int main()
{
	printf("Start main :\n");
	void (*fun)(int,int,int);
	fun=sum;
	fun(call,23,45);
	printf("End of main:\n");
	return 0;

}
