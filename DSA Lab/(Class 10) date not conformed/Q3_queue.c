#include <stdio.h>
 
#define MAX 5
 

typedef struct queue
{
    int front   ;
    int rear    ;
    int ele[MAX]    ;
}Queue;
 

void Intialze(Queue *q)
{
    q->rear  = -1;
    q->front =  0;
}
 

int isFullfillornot(Queue *q)
{
    int full=0;
 
    if( q->rear == MAX -1)
        full = 1;
 
    return full;
}
 

int isEmpty(Queue *q)
{
    int empty=0;
 
    if( q->front == q->rear+1 )
        empty = 1;
 
    return empty;
}
 

void inserteleQueue(Queue *q,int item)
{
    if( isFullfillornot(q) )
    {
        printf("\nQueue Overflow");
        return;
    }
 
    q->ele[++(q->rear)] = item;
    printf("\nInserted item : %d",item);
}
 

int deleteQueue(Queue *q, int * item)
{
    if( isEmpty(q) )
    {
        printf("\nQueue Underflow");
        return -1;
    }
    *item = q->ele[(q->front)++];
    return 0;
}
 
int main()
{
    int item = 0;   
    Queue q;
 
    Intialze(&q);
 
    inserteleQueue(&q,10);
    inserteleQueue(&q,20);
    inserteleQueue(&q,30);
    inserteleQueue(&q,40);
    inserteleQueue(&q,50);
    inserteleQueue(&q,60);
 
    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);
    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);
    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);
    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);
    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);
    if( deleteQueue( &q, &item ) == 0 )
        printf("\nDeleted item : %d",item);
 
    printf("\n");
    return 0;  
}