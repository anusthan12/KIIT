
#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int *arr;
    int top;
    unsigned space;
    
};
struct Stack *create(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->space = capacity;
    stack->top = -1;
    stack->arr = (int *)malloc(stack->space * sizeof(int));
    return stack;
}
int isFull(struct Stack *stack)
{
    return stack->top == stack->space - 1;
}
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}
void push(struct Stack *stack, int item)
{

    if (isFull(stack))
        return;
    stack->arr[++stack->top] = item;
}
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return -1;
    return stack->arr[stack->top--];
}
void reverseArrayS(int arr[], int n)
{
    struct Stack *stack = create(n);

    for (int i = 0; i < n; i++)
    {
        push(stack, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = pop(stack);
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int a=0,b=0,c=0,d=0;
    printf("Enter value of of A,B,C,D ");
    scanf("%d",&a);
      scanf("%d",&b);
        scanf("%d",&c);
          scanf("%d",&d);

    
    int arr[] = {a,b,c,d};

    int N = sizeof(arr) / sizeof(arr[0]);
    reverseArrayS(arr, N);
    return 0;
}

/*#include <iostream>
#include <stack>
using namespace std;

#include "solution.h"

int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}

#include <stack>
void reverseStack(stack<int> &s1, stack<int> &s2) {
    if(s1.size() <= 1)
        return ;
    
    int lastElem = s1.top();
    
    s1.pop();
    reverseStack(s1,s2);
    while(!s1.empty()){
        int a = s1.top();
        s1.pop();
        s2.push(a);
    }
    s2.push(lastElem);
    
    while(!s2.empty()){
        int a = s2.top();
        s2.pop();
        s1.push(a);
    }
}*/