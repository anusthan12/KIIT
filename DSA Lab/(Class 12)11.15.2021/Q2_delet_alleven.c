#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

void push_back(struct Node** head, int new) {  
  struct Node *newNode, *temp;
  newNode = (struct Node*)malloc(sizeof(struct Node)); 
  newNode->data = new;  
  newNode->next = NULL;

  if(*head == NULL)
   {
    *head = newNode; 
  } 
  else 
  {
    temp = *head;
    while(temp->next != NULL) {
      temp = temp->next;
    } 

    temp->next = newNode;
  }
}


void deleteEvenNodes(struct Node** head) {
  if(*head != NULL) {
    struct Node* oddNode = *head;
    struct Node* evenNode = (*head)->next;
    while(oddNode != NULL && evenNode != NULL) {
      oddNode->next = evenNode->next;
      free(evenNode);
      oddNode = oddNode->next;
      if(oddNode != NULL)
        evenNode = oddNode->next;
    }
  }   
} 


void display(struct Node* head_ref) {
  struct Node* temp = head_ref;
  if(head_ref != NULL) {
    printf("Your node list contains =  ");
    while (temp != NULL) {
      printf("%i ",temp->data);
      temp = temp->next;  
    }
    printf("\n");
  } else {
    printf("The list is empty.\n");
  }   
}


int main() {
  struct Node* a = NULL;

  
  push_back(&a, 95);//96
  push_back(&a, 96);//97
  push_back(&a, 97);//98
  push_back(&a, 98);//99
  push_back(&a, 99);//100

  
  display(a);
  deleteEvenNodes(&a);
  printf("Even nodes deleted Succesfull.\n");
  display(a);

  return 0; 
}