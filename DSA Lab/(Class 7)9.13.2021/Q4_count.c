#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void count(struct node *h)
{
    struct node *current,*ptr;
    int count=0,elements=0;
    for(ptr=h;ptr!=NULL;ptr=ptr->next)
    {
        count++;
        if(ptr->data%2==0)
            elements++;
    }
    printf("\n");
    printf("\nThe No. Of Node  in the linklist =  %d ",count);
    printf("\nThe total even elements in the linklist = %d ",elements);
    printf("\nTHE total odds elements in the linklist = %d ",count-elements);
}
void traverse(struct node *h)
{
    struct node *current;
    current=h;
    printf("\n Your node is : ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
}
void main()
{
    struct node *cur,*ptr;
    int n,i,ch,d=1;
    printf("Enter the no of nodes in the linklist : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       cur=malloc(sizeof(struct node));
       printf("Enter the elements of node  %d : ",(i+1));
       scanf("%d",&cur->data);
       cur->next=NULL;
       if(head==NULL)
       {
          head=cur;
          ptr=cur;
       }
       else
       {
           ptr->next=cur;
           ptr=cur;
       }
    }
    traverse(head);
    count(head);
    printf("\n");
   getch();
}
