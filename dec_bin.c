#include<stdio.h>
#include<stdlib.h>

int main()
{
	int dec,bin,a=1,n=1,i,lim;
	printf("Enter the limit :\n");
	scanf("%d",&lim);
	for(i=0;i<=lim;i++)
	{
		dec=i;

	while(dec > 0)
	{	
		bin += (dec % 2) * a;
		dec=dec/2;
		a*=10;
	}

		printf("%d = %d\t",i,bin);
		bin=0;
		a=1;
		++n;
		if(n==12)
		{
		printf("\n");
		n=1;
		}

	}
	return 0;
}

