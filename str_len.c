#include<stdio.h>
#include<string.h>


void str_len(char *str1);
int main()
{
	int n=10;
	printf("Please Enter the Length and String :\n");
//	scanf("%d",&n);
	char str[n];
	scanf("%s",str);

	str_len(str);
	return 0;
}

void str_len(char *str1)
{
	int i=0;
	while(*str1!='\0')
	{
		i++;
		str1++;
	}
	printf("Length of the string is %d\n",i);
}

