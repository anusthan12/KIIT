#include <stdio.h>  
#include <stdlib.h>    
struct node{  
    int data;  
    struct node *next;  
};      

struct node *head, *tail = NULL;  
 
void Node(int data) {  
    
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
void display() {  
      
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty\n try again !");  
        return;  
    }  
    printf("Nodes of singly linked list: \n");  
    while(current != NULL) {  
        
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{  
    Node(1);  
    Node(2);  
    Node(3);  
    Node(4);  
    display();  
   
    return 0;  
}  