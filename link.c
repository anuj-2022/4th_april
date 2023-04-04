#include<stdio.h>
#include<stdlib.h>

struct naode
{
	int data;
	struct node *next;
}

struct node *head=NULL;

int main()
{
	create();
	display();
	add_beg();
	display();
	add_end();
	display();
	remove_pos();
	display();
	return 0;
}

void create(void)
{
	struct node *tmp,*curr;
	
