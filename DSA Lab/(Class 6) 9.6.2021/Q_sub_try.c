
#include <stdio.h>
#include <stdlib.h>

struct node{    
int data;
struct node *next;
}*head=NULL;

void create(){
struct node *ptr,*last;

head=(struct node*)malloc(sizeof(struct node));

printf("Enter 1st element: ");
scanf("%d",&head->data);
head->next=NULL;

last=head;
while(1){
 int temp;
 printf("Enter the next element(press 0 to end): ");
 scanf("%d",&temp);
 if(temp==0)
 break;
 else{

 ptr=(struct node*)malloc(sizeof(struct node));
 ptr->data=temp;
 last->next=ptr;
 ptr->next=NULL;
 last=ptr;
 } 
 }
printf("\nLINKED LIST IS CREATED SUCCESFULLY\n");
}

void displaythatList(){
struct node *ptr;
ptr=head;
printf("\nLINKED LIST = \n");
while(ptr!=NULL){
 printf("%d\t",ptr->data);
 ptr=ptr->next;
}
}

void search(){
struct node* ptr;
int count=0,temp;
printf("\nEnter element to search: ");
scanf("%d",&temp);
ptr=head;
while(ptr!=NULL && temp!=ptr->data){
 count++;
 ptr=ptr->next;
}
 printf("\nelement found at %d position\n",count+1);
}
void insert(){
struct node *ptr,*temp;
int s;
printf("\nEnter element to add after = ");
scanf("%d",&s);
ptr=head;
while(ptr!=NULL && s!=ptr->data){
 ptr=ptr->next;
}
 temp=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter element to insert: ");
 scanf("%d",&temp->data);
 temp->next=ptr->next;
 ptr->next=temp;
 printf("\nElement inserted\n");
}
void dlt(){
 struct node *ptr,*temp;
 int s;
 printf("\nEnter element to delete: ");
 scanf("%d",&s);
 ptr=head;
 while(s!=(ptr->next)->data){
 ptr=ptr->next;
 }
 ptr->next=ptr->next->next;
}
int main(void){
 int caseno;
 printf("\n0\tExit\n1)\tCreate\n2)\tDispaly\n3)\tInsert\n4)\tDelete\n");
 printf("Enter operation: ");
 scanf("%d",&caseno);
 switch (caseno){
 case 0:
 exit(1);
 case 1:
 create();
 main();
 case 2:
 displaythatList();
 main();
 case 3:
 insert();
 main();
 case 4:
 dlt();
 main();
 } }