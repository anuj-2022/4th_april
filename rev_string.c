#include<stdio.h>
#include<string.h>

int main()
{
	char s[]="LUCKNOW",t;
	int i=0,n;
	n=strlen(s);
	for(i=0;i<(n/2);i++)
	{
		t=s[i];
		s[i]=s[n-1-i];
		s[n-1-i]=t;
	}
	printf("After reversing the string : %s\n",s);
	return 0;
}
