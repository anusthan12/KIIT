#include<stdio.h>
#include<malloc.h>

struct node
{
int data;
struct node * left, *right;
};


struct node* create(struct node *root,int n)		
{ 
struct node *curr=(struct node *)malloc(sizeof(struct node));
curr->data=n;
curr->left=curr->right=NULL;

if(root==NULL)
root=curr;
else
{
if(n<=root->data)
	root->left=create(root->left,n);
else
	root->right=create(root->right,n);
}
return root;
}

void inorder(struct node *root)
 {
 		if(root!=NULL)
 	{
 	inorder(root->left);
 	printf("%d  ",root->data);
 	inorder(root->right);
 }
 }
 
 void prorder(struct node *root)
 {
 	if(root!=NULL)
 	{
 	printf("%d  ",root->data);
 	prorder(root->left);
 	prorder(root->right);
  }
 }
 
void postorder(struct node *root)
 {
 		if(root!=NULL)
 	{
 	postorder(root->left);
 	postorder(root->right);
 	printf("%d  ",root->data);
 }
 }
 
 int main()
 {
        printf("\n\n************BST(Binary Search Tree)*************\n\n");
 	struct node *root=NULL;
 	int value,choice=1;
 	while(choice)
 	{

 		printf("\nEnter the value of the node = ");
 		scanf("%d",&value);
 		root=create(root,value);
 		printf("\nDo you want to insert more nodes If Yes the Press 1 or No then Press 0 = ");
 		scanf("%d",&choice);
	 }
	 printf("\n Your In-Order Traversal  = ");
	 inorder(root);
	 printf("\nYour Pre-Order Traversal  = ");
	 prorder(root);
	 printf("\nYour Post-Order Traversal  = ");
	 postorder(root);
	 
 }