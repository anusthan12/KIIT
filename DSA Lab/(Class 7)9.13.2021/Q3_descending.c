#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void arranging(struct node *h)
{
    struct node *current,*ptr;
    int i,j,n;
    for(ptr=h;ptr!=NULL;ptr=ptr->next)
    {
        for(current=ptr->next;current!=NULL;current=current->next)
        {
            if(ptr->data<current->data)
            {
                n=ptr->data;
                ptr->data=current->data;
                current->data=n;
            }
        }
    }
}
void desending(struct node *h)
{
    struct node *current;
    current=h;
    printf("\nOrder of the elements : ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
}
void main()
{
    struct node *current,*ptr;
    int n,i,ch,d=1;
    printf("Enter the no. of nodes in the link list : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       current=malloc(sizeof(struct node));
       printf("Enter the elements of the  %d th postion : ",(i+1));
       scanf("%d",&current->data);
       current->next=NULL;
       if(head==NULL)
       {
          head=current;
          ptr=current;
       }
       else
       {
           ptr->next=current;
           ptr=current;
       }
    }
    desending(head);
    arranging(head);
    desending(head);
    printf("\n");
   getch();
}

/*#include <stdio.h>  
struct node{  
    int data;  
    struct node *next;  
};      
struct node *head, *tail = NULL;  

void node(int data) {  

    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
       
    if(head == NULL) {  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        tail->next = newNode;  
        tail = newNode;  
    }  
}  
  
    void sortList() {  
  
        struct node *current = head, *index = NULL;  
        int temp;  
          
        if(head == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
        
                index = current->next;  
                  
                while(index != NULL) {  
                   
                    if(current->data > index->data) {  
                        temp = current->data;  
                        current->data = index->data;  
                        index->data = temp;  
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
        }  
    }  
   
 
void display() {  
   
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    while(current != NULL) {  
 
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{  
     
    node(1);  
    node(9);  
    node(2);  
    node(8);  
    node(3);  
        
    printf("Original list given by user = \n");  
    display();  
      
    sortList();  
     
    printf("Sorted list: \n");  
    display();  
          
    return 0;  
}  */