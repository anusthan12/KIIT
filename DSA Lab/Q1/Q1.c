//Final Mid sem by Anusthan (20051337)
// wap to create a single linked list and reverse the list ........
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL, *tail = NULL;
void displayLL()
{
    struct node *currrent;
    int c = 0;
    currrent = head;
    while (currrent != NULL)
    {
        c++;
        printf("Node =  %d\n", currrent->data);
        currrent = currrent->next;
    }
    printf("<<------------------Output done sucessfully------------------ a code by 20051337>>\n");
}
void createLL(int n)
{
    struct node *curr;
    int x, i = 1;  
    while (i <= n) //1 2 3 4 5
    {
        curr = calloc(1, sizeof(struct node));
        curr->data = ((rand()) % 100);                      
        curr->next = NULL;
        if (head == NULL)
        {
            head = curr; //50
            tail = curr; //50
        }
        else
        {
            tail->next = curr;
            tail = curr;
        }
        i++;
    }
    printf("<<------------------Input done sucessfully------------------a code by 20051337>>\n");

    if (i > 0)
    {
        printf("Want to display the linked list. Enter 1 for yes and 0 for no \n");
        scanf("%d", &x);
        if (x == 1)
        {
            displayLL();
        }
        else
        {
            printf("OOPS went wrong !Returning back to switch case menu \n");
        }
    }
}

void Reversenode(struct node *h)
{
    if (h != NULL)
    {
        Reversenode(h->next);
        printf("ITS REVERSE = %d\n", h->data);
    }
    else
    {
        return;
    }
}
int main()
{
 
    int n, no;    // struct node *pointer;
    printf("Enter Number of elements(Pre installed)you want in the linked list\n");
    scanf("%d", &no);
    createLL(no);
printf("REVERSE NODE \n");
        Reversenode(head);
}