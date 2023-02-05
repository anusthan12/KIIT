
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * prev;
    struct node * next;
}*head, *last;


void createList(int n);
void displayListFromStarting();
void displayListFromEnding();

int main()
{
    int n, choice;

    head = NULL;
    last = NULL;
    
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    createList(n); 

    printf("\nPress 1 to display list from First ");
    printf("\nPress 2 to display list from End(Transverse) : ");
    scanf("%d", &choice);

    if(choice==1)
    {
        displayListFromStarting();
    }
    else if(choice == 2)
    {
        displayListFromEnding();
    }

    return 0;
}


void createList(int n)
{
    int i, data;
    struct node *newNode;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        if(head != NULL)
        {
            printf("Enter data of 1 node: ");
            scanf("%d", &data);

            head->data = data;
            head->prev = NULL;
            head->next = NULL;

            last = head;

            for(i=2; i<=n; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));

                if(newNode != NULL)
                {
                    printf("Enter data of %d node: ", i);
                    scanf("%d", &data);

                    newNode->data = data;
                    newNode->prev = last; // Link new node to the previous node
                    newNode->next = NULL;

                    last->next = newNode; // vice versa Link previous node to the new node
                    last = newNode;    // now new node bcome  last/previous node
                }
                else
                {
                    printf("Unable to allocate memory.");
                    break;
                }
            }

            printf("\nDOUBLY LINKED LIST CREATED \n");
        }
        else
        {
            printf("Unable to allocate memory");
        }
    }
}


void displayListFromStarting()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        printf("\n\nDATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of %d node = %d\n", n, temp->data);

            n++;
            
           
            temp = temp->next;                                                    // Move the current pointer to next node 
        }
}
}

void displayListFromEnding()
{
    struct node * temp;
    int n = 0;

    if(last == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = last;
        printf("\n\nDATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of last-%d node = %d\n", n, temp->data);
            n++;

            temp = temp->prev;                                                   // Move the current pointer to previous node 
        }
    }
}