#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct Node
{
     int data;
     struct Node *next;
}node;
node *head;

node* createnewlinkedlist(int);
void traverselinkedlist (node *head);
void insertNode();
void deleteNode();
void DeletedNodeatK();
int main()
{
    int n;
    printf("Enter the no of nodes in the linked list = ");
    scanf("%d",&n);
    head = createnewlinkedlist(n);
    traverselinkedlist(head);
    insertNode();
    deleteNode();
    DeletedNodeatK();
    return 0;
    getch();
}

node* createnewlinkedlist(int n){
    node *head=NULL,*temp,*p;
    for(int i=0;i<n;i++){
        temp= (node*)malloc(sizeof(node));
        printf("Enter data in %d node : ",i+1);
        scanf("%d",&(temp->data));
        temp->next=NULL;

        if(head==NULL)
        head = temp;
        else{
            p=head;
            while(p->next != NULL)
            p = p->next;
            p->next = temp;
        }
    }
    return head;
}

void traverselinkedlist(node *head){
    node *temp = head;
    if(temp == NULL)
    printf("Linked list is empty \n");
    else{
        printf("\nCreated linked list is = ");
        while(temp != NULL){
        printf("%d > ",temp->data);
        temp = temp->next;
        }
    }
}

void insertNode(){
    int ele;
    printf("\nEnter element from linked list to insert new node after that : ");
    scanf("%d",&ele);
    node *newNode=NULL,*temp,*p;
    newNode = (node*)malloc(sizeof(node));
    printf("Enter data of new node : ");
    scanf("%d",&(newNode->data));
    newNode->next= NULL;

    temp = head;
    while(temp->next != NULL){
        if(temp->data == ele){
            newNode->next = temp->next;
            temp->next= newNode;
            break;
        }
        else
        temp=temp->next;
    }
    if(temp->next == NULL)
    {
         newNode->next = temp->next;
            temp->next= newNode;
    }
    traverselinkedlist(head);
}

void deleteNode(){
    int delete;
    printf("\nEnter element from linked list to delete node after that : ");
    scanf("%d",&delete);

    node *p,*q;
    p = head;
    while(p->next != NULL){
        if(p->data == delete){
           break;
        }
        else
        p = p->next;
    }
           q = p->next;
           p->next = q->next;
           q->next = NULL;
           free(q);
    traverselinkedlist(head);
}

void DeletedNodeatK(){
    int k;
    printf("\nEnter the kth position to delete the node : ");
    scanf("%d",&k);

   node *p,*q;
   p = head;
   while(k>2){
   p = p->next;
   --k;
   }

   q = p->next;
   p->next = q->next;
   q->next = NULL;
   free(q);
    traverselinkedlist(head);
}