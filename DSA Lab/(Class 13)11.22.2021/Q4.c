#include <stdio.h>  
#include <stdlib.h>  
#include <stdbool.h>  
    
struct node{  
    int data;  
    struct node *left;  
    struct node *right;  
};  
   
// root of binary tree  
struct node *root = NULL;     
struct node* createNode(int data){  
 
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  

    newNode->data = data;  
    newNode->left = NULL;  
    newNode->right = NULL;  
      
    return newNode;  
}  
   
struct queue  
{  
    int front, rear, size;  
    struct node* *arr;  
};  
   
struct queue* createQueue()  
{  
    struct queue* newQueue = (struct queue*) malloc(sizeof( struct queue ));  
    newQueue->front = -1;  
    newQueue->rear = 0;  
    newQueue->size = 0;  
  
    newQueue->arr = (struct node**) malloc(100 * sizeof( struct node* ));  
   
    return newQueue;  
}  
   

void addqueue(struct queue* queue, struct node *temp){  
    queue->arr[queue->rear++] = temp;  
    queue->size++;  
}  
    
struct node *deletqueue(struct queue* queue){  
    queue->size--;  
    return queue->arr[++queue->front];  
}  
    
void insertNode(int data) {   
    struct node *newNode = createNode(data);  
    if(root == NULL){  
        root = newNode;  
        return;  
    }  
    else {  

        struct queue* queue = createQueue();  
        addqueue(queue, root);  
          
        while(true) {  
            struct node *node = deletqueue(queue);  
  
            if(node->left != NULL && node->right != NULL) {  
                addqueue(queue, node->left);  
                addqueue(queue, node->right);  
            }  
            else {  
              
                if(node->left == NULL) {  
                    node->left = newNode;  
                    addqueue(queue, node->left);  
                }  
                
                else {  
                    node->right = newNode;  
                    addqueue(queue, node->right);  
                }  
                break;  
            }  
        }  
    }  
}  
    
void inorderTraversal(struct node *node) {  
    if(root == NULL){  
        printf("Tree is empty\n");  
        return;  
    }  
    else {  
            
        if(node->left != NULL)  
            inorderTraversal(node->left);  
        printf("%d ", node->data);  
        if(node->right != NULL)  
            inorderTraversal(node->right);  
                
        }  
    }  
            
int main(){  
      
    
    insertNode('A');   
    printf("Binary tree after First insertion: \n");  
    inorderTraversal(root);  
      
    insertNode('B');  
    insertNode('C');    
    printf("\nBinary tree after second insertion: \n"); 
    inorderTraversal(root);  
      
    insertNode('D');  
    insertNode('E');  
    //D will become left child and E will become right child of node B  
    printf("\nBinary tree after third insertion: \n");  
    
    inorderTraversal(root);  
      
    insertNode('F');  
    insertNode('G');  
    //F will become left child and G will become right child of node C  
    printf("\nBinary tree after forth insertion: \n");  
    //Binary after inserting nodes  
    inorderTraversal(root);  
      
    return 0;  
}  
