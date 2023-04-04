#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* strStr(char *str,char *sstr)
{
	while(*str)
	{
	char *begin = str;
	char *pattern = sstr;
	while(*str && *pattern && *str == *pattern)
	{
		str++;
		pattern++;
	}
	if(!*pattern)
		return begin;
	str=begin + 1;
	}
	return NULL;
}

int main()
{
	char s[]="HYDERABAD INDIA";
	printf("string is === %s\n",strStr(s,"A"));
	return 0;
}
