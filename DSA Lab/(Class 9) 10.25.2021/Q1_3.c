#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*head=NULL;
void create(int d)
{
    struct node *curr,*ptr;
    curr=malloc(sizeof(struct node));
    printf("\nENTER THE DESIRED ELEMENT %d : ",d);
    scanf("%d",&curr->data);
    curr->prev=NULL;
    curr->next=NULL;
    if(head==NULL)
    {
        head=curr;
        ptr=curr;
    }
    else
    {
        ptr->next=curr;
        ptr=curr;
    }
}
void traverse()
{
    struct node *cur;
    cur=head;
    printf("\n\nTHE NODE IS : ");
    while(cur!=NULL)
    {
        printf("%d ",cur->data);
        cur=cur->next;
    }
}
void insert_begin()
{
    struct node *cur;
    cur=malloc(sizeof(struct node));
    printf("\nENTER ELEMENT : ");
    scanf("%d",&cur->data);
    cur->prev=NULL;
    cur->next=NULL;
    if(head==NULL)
    {
        cur=head;
    }
    else
    {
       cur->next=head;
       head=cur;
    }
}
void insert_end()
{
    struct node *cur,*ptr;
    cur=head;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    ptr=malloc(sizeof(struct node));
    printf("\nENTER ELEMENT : ");
    scanf("%d",&ptr->data);
    ptr->prev=NULL;
    ptr->next=NULL;
    if(head==NULL)
    {
        cur=head;
    }
    else
    {
       cur->next=ptr;
       ptr->next=NULL;
       ptr->prev=cur;
    }
}
void deletbegin()
{
    struct node *cur;
    cur=head;
    if(cur==NULL)
    {
        printf("\nNOT POSSIBLE ");
    }
    else
    {
        head=head->next;
        free(cur);
    }
}
void deletend()
{
    struct node *cur,*ptr;
    cur=head;
    while(cur->next!=NULL)
    {
        ptr=cur;
        cur=cur->next;
    }
    if(head==NULL)
    {
        printf("\nDELETION OF NODE NOT POSSIBLE ");
    }
    else
    {
        ptr->next=NULL;
        free(cur);
    }
}
void swap(int no)
{
    struct node *cur;
    cur=head;
    if(head==NULL)
    {
        printf("\nTHE SWAP IS NOT POSSIBLE ");
    }
    else if(no!=1)
    {
       struct node *cur,*ptr;
       cur=head;
       int t;
       while(cur->next!=NULL)
       {
           cur=cur->next;
       }
       ptr=head;
       t=ptr->data;
       ptr->data=cur->data;
       cur->data=t;
    }
}
void main()
{
    struct node *cur,*ptr;
    int n,i,ch,d=1;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       create(i+1);
    }
   while(d!=0)
   {
   printf("\n 1. TRAVERSE");
   printf("\n 2.  INSERT AT BEGINNING");
   printf("\n 3.  INSERT AT END");
   printf("\n 4.  SWAP");
   printf("\n 5.  DELETE AT BEGINNING");
   printf("\n 6.  DELETE AT END");
   printf("\nENTER YOUR CHOICE : ");
   scanf("%d",&ch);
   printf("\n");
   switch(ch)
   {
      case 1:
      {
          traverse();
          break;
      }
      case 2:
      {
          insert_begin();
          traverse();
          break;
      }
      case 3:
      {
          insert_end();
          traverse();
          break;
      }
      case 4:
      {
          swap(n);
          traverse();
          break;
      }
      case 5:
      {
          deletbegin();
          traverse();
          break;
      }
      case 6:
      {
          deletend();
          traverse();
          break;
      }
      default:
     {
        printf("\n INVALID CHOICE ");
        break;
     }
    }
        printf("\n");
        printf("\nWANT TO RUN THE LOOP : ");
        scanf("%d",&d);
    }

   getch();
}
