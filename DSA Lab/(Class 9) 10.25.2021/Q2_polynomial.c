
#include<stdlib.h>

//decleration
struct node
{
	struct node *prev;
	int data;
	struct node *next;
}*first;
//creation
void create(int a[],int n)
{
	struct node *t,*last;
	int i;
	first=(struct node*)malloc(sizeof(struct node));
	first->data=a[0];
	first->next=first->prev=NULL;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t=(struct node*)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t;
	}
}
//display
void display(struct node *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
//length creation
int length(struct node *p)
{
	int len=0;
	while(p)
	{
		len++;
		p=p->next;
	}
	return len;
}
//INSERTION
void insert(struct node *p,int index,int x)
{
	struct node *t;
	int i;
	if(index<0|| index>length(p))
		return;
	if(index==0)
	{
		t=(struct node*)malloc(sizeof(struct node));
		t->data=x;
		t->prev=NULL;
		t->next=first;
		first->prev=t;
		first=t;
	}
	
	else
	{
		for(int i=1;i<index-1;i++)
			p=p->next;
		t=(struct node*)malloc(sizeof(struct node));
		t->data=x;
		t->next=p->next;
		t->prev=p;
		if(p->next)
		{
			p->next->prev=t;
		}
		p->next=t;
	}
}
//DELETION
int Delete(struct node *p,int index)
{
	struct node *q;
	int x=-1,i;
	if(index<0||index>length(p))
		return x;
	if(index==1)
	{
		first=first->next;
		if(first)
		{
			first->prev=NULL;
		}
		x=p->data;
		free(p);
	}
	else
	{
		for(int i=1;i<index-1;i++)
		p=p->next;
		p->prev->next=p->next;
		if(p->next)
		{
			p->next->prev=p->prev;
		}
		x=p->data;
		free(p);
	}
	
}
int main()
{
	int a[]={4,5,6,7,8};
	create(a,5);
	printf("length of linked list is :%d \n",length(first));
	insert(first,5,90);
	Delete(first,4);
	display(first);
}