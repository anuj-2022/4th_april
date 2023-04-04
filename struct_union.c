#include<stdio.h>
#include<stdlib.h>

union data
{
	int a;
	char b[4];
};

int main()
{
	union data name;
	printf("Please Enter the data :\n");
	scanf("%d",&name.a);

	printf("data is %d\n",name.a);

	printf("Data is 2 %d\n",name.b[3]);
	 return 0;
}
