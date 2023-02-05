#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct stack
{
    unsigned size;
    int *arr,top;
};

struct stack* stackcreation(unsigned size)
{
    struct stack* stack = malloc(sizeof(struct stack));
    stack->size=size;
    stack->top=-1;
    stack->arr=malloc(sizeof(int)*stack->size);
    return stack;
}

void push(struct stack* stack, int elements)
{
    if(stack->top==stack->size-1) return;
    stack->arr[++(stack->top)] = elements;
}
int pop(struct stack* stack)
{
    if(stack->top<0) return INT_MIN;
    return stack->arr[stack->top--];
}
void display(struct stack* stack)
{
    for(int i=stack->top;i>=0;i--)
    printf("%d ",stack->arr[i]);
}
int largest_ele (struct stack* stack)
{
    int i,largest=stack->arr[0];
    for(int i=stack->top;i>=0;i--)
    if(stack->arr[i]>largest)
    largest=stack->arr[i];
    return largest;
}
int smallest_ele (struct stack* stack)
{
    int i,temp=stack->arr[1];
    for(int i=stack->top;i>=0;i--)
    if(stack->arr[i]<temp) 
    temp=stack->arr[i];
    return temp;
}
int main()
{
    printf("****Stack creation push pull traverse*****\n");
    printf("Elements : ");
    struct stack* stack = stackcreation(5);
    for(int i=1;i<=4;i++) push(stack,i);
    display(stack);
    printf("\nLargest element in stack : %d",largest_ele(stack));
    printf("\nSmallest element in stack : %d",smallest_ele(stack));
    printf("\n%d",pop(stack));
    printf("\n%d\n",pop(stack));
    display(stack);
    printf("\n****Program ended successfully*****");
    return 0;
}