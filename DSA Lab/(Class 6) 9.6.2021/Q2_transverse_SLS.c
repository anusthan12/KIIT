#include<stdio.h>  
#include<stdlib.h>  
void new(int);  
void traverse();  
struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *head;  
void main ()  
{  
    int choice,number;  
    do   
    {  
        printf("\n 1.Put data in the list \n 2.Traverse\n 3.Exit \n ");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            printf("\nEnter the item\n");  
            scanf("%d",&number);  
            new(number);  
            break;   
            case 2:  
            traverse();
            break;   
            case 3:  
            exit(0);  
            break;    
            default:  
            printf("\nPlease enter valid choice(Not possible)\n");  
        }  
                  
    }while(choice != 3);  
}  
void new(int item)  
    {  
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("\nNot possible\n");  
        }  
        else  
        {  
            ptr->data = item;  
            ptr->next = head;  
            head = ptr;  
            printf("\nNode inputed Succesfully \n");  
        }  
          
    }  
void traverse()  
    {  
        struct node *ptr;     
        ptr = head;   
        if(ptr == NULL)  
        {  
            printf("Empty list..");  
        }  
        else  
        {  
            printf("*********Printing values after transversion ***********\n");   
            while (ptr!=NULL)  
            {  
                printf("\n\t\t\t%d",ptr->data);  
                ptr = ptr -> next;  
            }  
            printf("\n*********Printing values after transversion ***********\n");
        }  
     }  