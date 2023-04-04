#include<stdio.h>
#include<stdlib.h>

void call_back(int a)
{
	printf("In call back function and the result is %d\n",a);
//	return 0;
}
void fun(void (*call_back)(int))
{
	printf("Starting my fun :\n");
	call_back(45);
	printf("End my fun :\n");
//	return 0;
}

int main()
{
	printf("Start main :\n");
	fun(call_back);
	printf("End main :\n");
	return 0;
}
