#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};
void create(struct node **head,int elements)
{
    struct node *current,*ptr;
    current=malloc(sizeof(struct node));
    printf("\nEnter the %d element : ",elements);

    scanf("%d",&current->data);
    current->next=NULL;
    if(*head==NULL)
    {
        *head=current;
        current->next=*head;
        ptr=current;
    }
    else
    {
        ptr->next=current;
        current->next=*head;
        ptr=current;
    }
}

void display(struct node *h)
{
    struct node *cur;
    cur=h;
    if(cur==NULL)
    {
      printf("\nThe of No nodes present");
      return;
    }
    printf("\n\nThe node are : ");
    while(cur->next!=h)
    {
        printf("%d ",cur->data);
        cur=cur->next;
    }
    printf("%d ",cur->data);
}
void swap_last(struct node **head)
{
    struct node *cur,*frwd;
    cur=*head;
    if(cur==NULL || cur->next==*head)
        return;
    while(cur->next->next!=*head)
    {
        cur=cur->next;
    }
    frwd=cur->next;
    frwd->next=(*head)->next;
    cur->next=*head;
    (*head)->next=frwd;
    *head=frwd;

}
void main()
{
    struct node *head=NULL;
    int n,i;
    printf("Enter the number of elements you want : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       create(&head,i+1);
    }
    printf("\nInitially Before Swapping the Nodes \n ");
    display(head);
    swap_last(&head);
    printf("\nFirst and last Node swipped Successfully : ");
    display(head);

    
}