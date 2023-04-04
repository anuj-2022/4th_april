#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* strStr(char *str,char *substr)
{
	while(*str)
	{
		char *begin = str;
		char *pattern = substr;
		while(*str && *pattern && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if(!*pattern)
			return begin;

		str = begin + 1;
	}
	return NULL;
}

int main()
{
	char s1[]="ThunderSoft India";
	printf("string is %s\n",strStr(s1,"Soft"));
	return 0;
}

