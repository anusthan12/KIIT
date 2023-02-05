#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list* next;
};
void createnode(struct list** head,int dat)
{
    struct list* temp, *temp1;
    temp1=malloc(sizeof(struct list));
    temp1->data=dat;
    temp1->next=NULL;
    if(*head==NULL)
    *head=temp1;  
    else
    {
        temp=*head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=temp1;
    }    
}
void insertnode(struct list **h,struct list **h2,int pos)
{
    if (pos==1)
    {
        struct list* t,*temp;
        temp=*h2;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=*h;
        t=*h;
        *h=*h2;
        *h2=t;
        printf("\nAfter inserting at beginning\n"); 
    }
    else if(pos==9999)
    {
        struct list* temp;
        temp=*h;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=*h2;
        printf("\nAfter inserting at end\n");
    }
    else
    {
        int i;
        struct list* temp,*t;
        temp=*h2;
        while(temp->next!=NULL)
        temp=temp->next;
        t=temp;
        temp=*h;
        for(i=1;i<pos-1;i++)
        temp=temp->next;
        t->next=temp->next;
        temp->next=*h2;
        printf("\nafter inserting at position %d\n",pos);  
    }
}
void deletebeg(struct list** h,int n)
{
    struct list* temp,*temp1;
    int i;
    temp=*h;
    for(i=1;i<=n;i++)
        temp=temp->next;
    *h=temp;
    printf("After deleting %d elements from beginning\n",n);
}
void deleteend(struct list** h,int n)
{
    struct list* temp,*temp1;
    int i,count=0;
    temp=*h;
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    for(i=1;i<=count-n;i++)
        temp=temp->next;
    free(temp);
    printf("After deleting %d elements from end\n",n);
}
void printing(struct list** head)
{
struct list* temp=*head;
do
{
    printf("%d ",temp->data);
    temp=temp->next;
}while(temp->next!=NULL);
    printf("%d",temp->data);
}
int main()
{
    struct list* head=NULL,*head2 = NULL;
    int no, newdata, i, scase,pos;
    printf("Enter how many nodes to create : ");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        printf("Enter data of node %d : ",i);
        scanf("%d",&newdata);
        createnode(&head,newdata);
    }
    printf("Press 1 to insert at beginnig\nPress 2 to insert at end\nPress 3 to insert at kth position\n");
    printf("Press 4 to delete from beginning\nPress 5 to delete from end\n");
    scanf("%d",&scase);
    switch (scase)
    {
    case 1:
        printf("Enter how many nodes to insert : ");
        scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        printf("Enter data of node %d : ",i);
        scanf("%d",&newdata);
        createnode(&head2,newdata);
    }
        insertnode(&head,&head2,1);
        break;
    case 2:
        printf("Enter how many nodes to insert : ");
        scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        printf("Enter data of node %d : ",i);
        scanf("%d",&newdata);
        createnode(&head2,newdata);
    }
        insertnode(&head,&head2,9999);
        break;
    case 3:
        printf("Enter how many nodes to insert : ");
        scanf("%d",&no);
        printf("Enter the position to insert nodes at : ");
        scanf("%d",&pos);
    for(i=1;i<=no;i++)
    {
        printf("Enter data of node %d : ",i);
        scanf("%d",&newdata);
        createnode(&head2,newdata);
    }
        insertnode(&head,&head2,pos);
        break;      
    case 4:
        printf("\nEnter how many nodes to delete : ");
        scanf("%d",&no);
        deletebeg(&head,no);
        break;
    case 5:
        printf("\nEnter how many nodes to delete : ");
        scanf("%d",&no);
        deleteend(&head,no);
        break;
    default:
        printf("\n ( ~ _ ~ ;) Invalid input");
        break;
    }
    printing(&head);
    return 0;
}