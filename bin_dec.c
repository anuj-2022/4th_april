#include<stdio.h>
#include<stdlib.h>

int main()
{
	int bin,dec=0,base=1,rem;
	printf("Enter the Binary number :\n");
	scanf("%d",&bin);

	while(bin>0)
	{
		rem=bin%10;
		dec=dec+rem*base;
		bin=bin/10;
		base=base*2;
	}
	printf("Decimal number is %d\n",dec);
	return 0;
}
