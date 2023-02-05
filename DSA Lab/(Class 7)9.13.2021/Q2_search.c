#include<stdio.h>
#include<malloc.h>
struct node
{
     int data;
     struct node *next;
}
first, *new;

int search(int item)
{
     int count=1;
     new=&first;
     while(new->next!=NULL)
     {
          if(new->data==item)
               break;
          else
               count++;
          new=new->next;
     }
     return count;
}
int main()
{
     int number,i,searching,position;

     first.next=NULL;
     new=&first;
     printf("Enter the no. of nodes  in linked list = ");
     scanf("%d",&number);
     printf("\n");
     for(i=0;i< number;i++)
     {
          new->next=(struct node *)malloc(sizeof(struct node));
          
          printf("Enter element in the node %d: ",i+1);
          scanf("%d",&new->data);
          new=new->next;
     }
     new->next=NULL;
     printf("\nElements in linked list = \n\n");
     new=&first;
     while(new->next!=NULL)
     {
          printf("%d  ",new->data);
          new=new->next;
     }
     printf("  ");


     printf("\nEnter element to be searched : ");
     scanf("%d",&searching);

     position=search(searching);
     if(position<=number)
          printf("\n'%d' is found at node = %d",searching,position);
     else
          printf("The number '%d' is not in linked list.",searching);
     return 0;
}
