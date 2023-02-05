#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
}*start;
void create_list(int data)
{
    struct node *temp,*q;
    temp=malloc(sizeof(struct node));
    temp->info=data;
    temp->link=NULL;
    if (start==NULL)
    {
        start=temp;
    
    }
    else
    {
        q=start;
        while (q->link!=NULL)
        {
            q=q->link;
        }
        q->link=temp;
    }
    
}
void display()
{
    struct node *q;
    if(start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    q=start;
    while(q!=NULL)
    {
        printf("%d->",q->info);
        q=q->link;
    }
}
void insert(int data,int pos)
{
    int i;
    struct node *temp,*q;
    temp=malloc(sizeof(struct node ));
    temp->info=data;
    if(pos==0)
    {
        temp->link=start;
        start->link=temp;
        return ;
    }
    q=start;
    for(i=0;i<pos;i++)
    {
        q=q->link;
    }
    temp->link=q->link;
    q->link=temp;
}
void delete(int data)
{
    struct node *temp,*q;
   if(start->info==data)
    {
        temp=start;
        start=start->link;
        free(temp);
        return;
    }
    q=start;
    while (q->link->link!=NULL)
    {
        if(q->link->info==data)
        {
            temp=q->link;
            q->link=temp->link;
            free(temp);
            return;
        }
        q=q->link;
    }
    if(q->link->info==data)
    {
        temp=q->link;
        free(temp);
        q->link=NULL;
        return;
    }
}
void reverse()
{
    struct node *p1,*p2,*p3;
    if(start->link==NULL)
    printf("There is only one node present\n");
    if(start == NULL)
    printf("There is no node present\n");
   p1=start;
   p2=p1->link;
   p3=p2->link;
   p1->link=NULL;
   p2->link=p1;
   while (p3!=NULL)
   {
       p1=p2;
       p2=p3;
       p3=p3->link;
       p2->link=p1;
   }
   start=p2;
}
   
    

int main()
{
    int ch=1,n,c,i,data,pos,d,d1;
    while (ch==1)
    {
            printf("Enter 1 for creating the list \n");
        printf("Enter 2 for display of the list\n");
        printf("Enter 3 for insertion of node in the list\n");
        printf("Enter 4 for deletion of node \n");
        printf("Enter 5 for reverse of the linklist\n");
        scanf("%d",&c);
        switch (c)
        {
            case 1:
            printf("Enter the no. of nodes you want to enter \n");
            scanf("%d",&n);
            start=NULL;
            for(i=0;i<n;i++)
            {
                printf("Enter the data you want to enter in the linked list\n");
                scanf("%d",&data);
                create_list(data);
            }
            break;
            case 2:
            display();
            break;
            case 3:
            printf("Enter the data you want to insert\n");
            scanf("%d",&d);
            printf("Enter the position where you want to insert the node\n");
            scanf("%d",&pos);
            insert(d,pos);
            break;
            case 4:
            printf("Enter the data you want to delete\n");
            scanf("%d",&d1);
            delete(d1);
            break;
            case 5:
            reverse();
            break;
            default:
            printf("Invalid entry\n");
        }
        printf("\nDo you wan to do more changes(1/0)\n");
        scanf("%d",&ch);
    }
        return 0;
}