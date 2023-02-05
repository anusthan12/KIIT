#include <stdio.h>
#include <stdlib.h>
 
#define MAX 5
 
void insert_by_priority(int);
void delete_by_priority(int);
void create();
void check(int);
void display_priorityqueue();
 
int p_queue[MAX];
int front, rear;
 
void main()
{
    int n, choice;
 
    printf("\n1. Insert ");
    printf("\n2.  Delete ");
    printf("\n3.  Display ");
    printf("\n4.  Quit");
 
    create();
 
    while (1)
    {
        printf("\nEnter your choice : ");    
        scanf("%d", &choice);
 
        switch (choice)
        {
        case 1: 
            printf("\nEnter value to be inserted : ");
            scanf("%d",&n);
            insert_by_priority(n);
            break;
        case 2:
            printf("\nEnter value to delete : ");
            scanf("%d",&n);
            delete_by_priority(n);
            break;
        case 3: 
            display_priorityqueue();
            break;
        case 4: 
            exit(0);
        default: 
            printf("\nChoice is incorrect, Enter a correct choice");
        }
    }
}
 
// empty priority queue 
void create()
{
    front = rear = -1;
}
 

void insert_by_priority(int data)
{
    if (rear >= MAX - 1)
    {
        printf("\nQueue overflow no more elements can be inserted");
        return;
    }
    if ((front == -1) && (rear == -1))
    {
        front++;
        rear++;
        p_queue[rear] = data;
        return;
    }    
    else
        check(data);
    rear++;
}
 

void check(int data)
{
    int i,j;
    for (i = 0; i <= rear; i++)
    {
        if (data >= p_queue[i])
        {
            for (j = rear + 1; j > i; j--)
            {
                p_queue[j] = p_queue[j - 1];
            }
            p_queue[i] = data;
            return;
        }
    }
    p_queue[i] = data;
}
 

void delete_by_priority(int data)
{
    int i;
 
    if ((front==-1) && (rear==-1))
    {
        printf("\nQueue is empty no elements to delete");
        return;
    }
 
    for (i = 0; i <= rear; i++)
    {
        if (data == p_queue[i])
        {
            for (; i < rear; i++)
            {
                p_queue[i] = p_queue[i + 1];
            }
 
        p_queue[i] = -99;
        rear--;
 
        if (rear == -1) 
            front = -1;
        return;
        }
    }
    printf("\n%d not found in queue to delete", data);
}

void display_priorityqueue()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
        return;
    }
 
    for (; front <= rear; front++)
    {
        printf(" %d ", p_queue[front]);
    }
 
    front = 0;
}