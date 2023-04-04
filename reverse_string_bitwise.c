#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char s[10]="HYDERABAD";
	int i,j,n;
	n=strlen(s)-1;
	for(i=0;i<=n;i++)
	{
		s[i]=s[i]^s[n];
		s[n]=s[i]^s[n];
		s[i]=s[i]^s[n];
		n=n-i;
	}
	printf("%s\n",s);
	return 0;
}
