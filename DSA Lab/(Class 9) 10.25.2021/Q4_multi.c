//q4
/*
#include<stdio.h> 
#include<stdlib.h> 
  
struct node 
{ 
 int coef; 
 int expo; 
 struct node *link; 
 }; 
 struct node *insert_sort(struct node *,int ,int); 
 void display(struct node *poly) 
 { 
 while(poly!=NULL) 
 {  
  
 if(poly->expo==0)  
 printf("%d",poly->coef); 
 else if(poly->expo==1 && poly->coef==1) 
 printf("x"); 
 else if(poly->expo==1) 
 printf("%dx",poly->coef); 
 else if(poly->coef==1) 
 printf("x^%d",poly->expo); 
  
  
 else printf("%dx^%d",poly->coef,poly->expo); 
 poly=poly->link; 
 if(poly!=NULL && poly->coef>=0) 
 { 
 printf("+"); 
 } 
  
 } 
  
 } 
  
 struct node *polynomial_multiplication(struct node *poly1,struct node *poly2) 
 { 
 struct node *poly3,*p2; 
 poly3=(struct node *)malloc(sizeof(struct node)); 
  
 while(poly1!=NULL) 
 { 
 for(p2=poly2;p2!=NULL;p2=p2->link) 
 { 
 poly3=insert_sort(poly3,(poly1->coef)*(p2->coef),poly1->expo+p2->expo); 
 } 
 poly1=poly1->link; 
 } 
 return poly3; 
 } 
 struct node *insert_sort(struct node *start,int coef,int expo) 
 { 
 struct node *temp,*p; 
 temp=(struct node *)malloc(sizeof(struct node )); 
 temp->coef=coef; 
 temp->expo=expo; 
  
 if(start==NULL || expo>=start->expo) 
 { 
 if(start!=NULL && expo==start->expo) 
 { 
 //  if they are equal we will just add their coefficient 
  
 start->coef=start->coef+coef; 
 return start; 
 } 
 // else  adding new term at first place if its exponent is greater than exponent 
 temp->link=start; 
 start=temp; 
 return start; 
 } 
 else 
 { 
 p=start; 
  
 while(p->link!=NULL && p->link->expo>=expo) 
 p=p->link; 
  
 if(p->expo==expo) 
 { 
 p->coef=coef+p->coef; 
 return start; 
 }  
  
 temp->link=p->link; 
 p->link=temp; 
 return start; 
 } 
 } 
 struct node * create() 
 { 
 struct node *poly=NULL; 
 int ino; 
 int expo; 
 int coef; 
 printf("\nHow many terms Do you have to insert in polynomial \n"); 
 scanf("%d",&ino); 
  
 for(int i=1;i<=ino;i++) 
 { 
 printf("\nEnter Coefficient And Exponent for term\n\n"); 
 scanf("%d%d",&coef,&expo); 
 poly=insert_sort(poly,coef,expo); 
 display(poly);// we are displaying polynomial by adding each term 
 } 
 return poly; // returning polynomial 
 } 
  
 int main() 
 { 
 struct node *poly1,*poly2,*poly3; 
  
 poly1=create(); 
 printf("\n NOW WE WILL ACCEPT 2ND POLYNOMIAL \n"); 
 poly2=create(); 
  
  
 poly3=polynomial_multiplication(poly1,poly2); 
 printf("\n\n Multiplication of two polynomial is \n\n"); 
 display(poly3); 
 return 0; 
} */

 #include<stdio.h>
#include<stdlib.h>
 
struct node 
{
 int coefficient,exponent;
 struct node *next;
};
 
struct node *hPtr1,*hPtr2,*hPtr3;

struct node *buildNode(int coefficient, int exponent) 
{
 struct node *ptr=(struct node *)malloc(sizeof(struct node));
 ptr->coefficient=coefficient;
 ptr->exponent=exponent;
 ptr->next=NULL;
 return ptr;
}

void polynomial_insert(struct node ** myNode,int coefficient,int exponent) 
{
 struct node *lPtr,*pPtr,*qPtr=*myNode;
 lPtr=buildNode(coefficient,exponent);
 if (*myNode==NULL || (*myNode)->exponent<exponent) 
 {
  *myNode=lPtr;
  (*myNode)->next=qPtr;
  return;
 }
 while(qPtr) 
 {
  pPtr=qPtr;
  qPtr=qPtr->next;
  if(!qPtr) 
  {
   pPtr->next=lPtr;
   break;
  } 
  else if((exponent<pPtr->exponent) && (exponent>qPtr->exponent))
  {
   lPtr->next = qPtr;
   pPtr->next = lPtr;
   break;
  }
 }
 return;
}   

void polynomial_add(struct node **n1,int coefficient,int exponent) 
{
 struct node *x=NULL,*temp=*n1;
 if (*n1==NULL || (*n1)->exponent<exponent) 
 {
  *n1=x=buildNode(coefficient,exponent);
  (*n1)->next=temp;
 } 
 else 
 {
  while(temp) 
  {
   if(temp->exponent==exponent) 
   {
    temp->coefficient=temp->coefficient+coefficient;
    return;
   }
   if(temp->exponent>exponent && (!temp->next || temp->next->exponent<exponent)) 
   {
    x=buildNode(coefficient,exponent);
    x->next=temp->next;
    temp->next=x;
    return;
   }
   temp=temp->next;
  }
  x->next=NULL;
  temp->next=x;
 }
}
   
void polynomial_multiply(struct node **n1,struct node *n2,struct node *n3) 
{
 struct node * temp;
 int coefficient, exponent;
 temp = n3;
 if(!n2 && !n3)
 {
  return;
 } 
 if(!n2) 
 {
  *n1 = n3;
 } 
 else if(!n3) 
 {
  *n1 = n2;
 } 
 else 
 {
  while(n2) 
  {
   while(n3) 
   {
    coefficient = n2->coefficient * n3->coefficient;
    exponent = n2->exponent + n3->exponent;
    n3 = n3->next;
    polynomial_add(n1, coefficient, exponent);
   }
   n3 = temp;
   n2 = n2->next;
  }
 }
 return;
}

struct node *polynomial_deleteList(struct node *ptr) 
{
 struct node *temp;
 while(ptr)
 {
  temp=ptr->next;
  free(ptr);
  ptr = temp;
 }
 return NULL;
}
   
void polynomial_view(struct node *ptr) 
{
 int i = 0;
 int flag=0;
 while (ptr) 
 {
  if(ptr->exponent!=0 || ptr->exponent!= 1)
  {
   if(ptr->coefficient>0 && flag==0)
   {
    printf("%dx^%d", ptr->coefficient,ptr->exponent);
    flag++;
   }
   else if(ptr->coefficient>0 && flag==1)
   {
    printf("+%dx^%d", ptr->coefficient,ptr->exponent);
   } 
   else if(ptr->coefficient<0)
   {
    printf("%dx^%d",ptr->coefficient,ptr->exponent);
   } 
  }
  else if(ptr->exponent==0)
  {
   if(ptr->coefficient>0 && flag==0 )
   {
    printf("%d",ptr->coefficient);
      flag++;
   }
   else if(ptr->coefficient>0 && flag==1)
   {
    printf("+%d", ptr->coefficient);
   } 
   else if(ptr->coefficient < 0)
   {
    printf("%d", ptr->coefficient);
   } 
  }
  else if(ptr->exponent==1)
  {
   if(ptr->coefficient>0 && flag==0)
   {
    printf("%dx",ptr->coefficient);
    flag++;
   }
   else if(ptr->coefficient > 0 && flag==1)
   {
    printf("+%dx", ptr->coefficient);
   } 
   else if(ptr->coefficient < 0)
   {
    printf("%dx", ptr->coefficient);
   } 
  }
  ptr=ptr->next;
  i++;
 }
 printf("\n");
 return;
}
   
int main(int argc,char *argv[]) 
{
 int coefficient,exponent,i,n;
 int count;
 printf("Multiplication of Two Polynomials\n");
 printf("Enter the number of coefficients in the multiplicand:");
 scanf("%d",&count);
 for(i=0;i<count;i++)
 {
  printf("Enter the coefficient part:");
  scanf("%d", &coefficient);
  printf("Enter the exponent part:");
  scanf("%d",&exponent);
  polynomial_insert(&hPtr1, coefficient, exponent);
 }
 printf("Enter the number of coefficients in the multiplier:");
 scanf("%d",&count);
 for(i=0;i<count;i++)
 {
  printf("Enter the coefficient part:");
  scanf("%d", &coefficient);
  printf("Enter the exponent part:");
  scanf("%d",&exponent);
  polynomial_insert(&hPtr2, coefficient, exponent);
 }
 printf("Polynomial Expression 1: ");
 polynomial_view(hPtr1);
 printf("Polynomial Expression 2: ");
 polynomial_view(hPtr2);
 polynomial_multiply(&hPtr3, hPtr1, hPtr2);
 printf("Output:\n");
 polynomial_view(hPtr3);
 hPtr1 = polynomial_deleteList(hPtr1);
 hPtr2 = polynomial_deleteList(hPtr2);
 hPtr3 = polynomial_deleteList(hPtr3);
 return 0;
}