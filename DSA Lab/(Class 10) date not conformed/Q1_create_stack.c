//20051337
#include <stdio.h>
#include <stdlib.h>

void push(int);
void pushagain(int);
int pop();
int popagain();
void insert();
void delete();
void traverse();
void create();
int stack[100], stack2[100];
int top1 = -1, top2 = -1;
int count = 0;

int main()
{
    int choice;

    printf("\nCREATING QUEUE USING STACKS \n\n");
    printf("\n Press 1. to Insert");
    printf("\n Press 2. to Delete");
    printf("\n Press 3.to Traverse");
    printf("\n Press 4.to Max min");
    printf("\n Press 5. to Exit");
    printf("\n");
    create();
    while (1)
    {
        printf("\nInput your choice ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            traverse();
            break;
            case 4:
            exit(0);
            default:
            printf("\nInvalid Choice\n");
        }
    }   
}

void create()
{
    top1 = top2 = -1;
}
void push(int element)
{
    stack[++top1] = element;
}
int pop()
{
    return(stack[top1--]); 
}
void pushagain(int element)
{
    stack2[++top2] = element; 
}
int popagain()
{
    return(stack2[top2--]); 
}

void insert()
{
    int data, i;
    printf("Input the data : ");
    scanf("%d", &data);
    push(data); 
    count++;
}

void delete()
{
    int i;
    for (i = 0;i <= count;i++)
    {
        pushagain(pop());
    }
    popagain(); 
    count--;
    for (i = 0;i <= count;i++)
    {
        push(popagain());
    }
}

void traverse()
{
    int i;
    if(top1 == -1)
    {
        printf("\n******EMPTY******88\n");
    }
    else
    {
        printf("\nQUEUE ELEMENTS : ");
    for (i = 0;i <= top1;i++)
    {
        printf(" %d ", stack[i]);
    }
    printf("\n");
    }
}