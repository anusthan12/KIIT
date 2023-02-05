#include <stdio.h>
#include <stdlib.h>



struct node {
    int data;//data          
    struct node *next; // Address 
}*head;


void creatingList(int n);
void insertNodeAtBeginning(int NUMBER);
void insertNodeAtheEnd(int NUMBER);
void insertNodeAtheMiddle(int NUMBER, int pos);
void deletethefirstnode();
void deletethelastnode();
void displaythatList();


int main()
{
    int n, data, position, choice;

    
      //Create a singly linked list of n nodes
     
    printf("Enter the total number of nodes in the list = ");
    scanf("%d", &n);
    creatingList(n);

    printf("\n Now Data in the list is \n");
    displaythatList();

     // Insert data at the beginning of the singly linked list
     
    printf("\nEnter that data which you wantto insert at beginning of the list: ");
    scanf("%d", &data);
    insertNodeAtBeginning(data);

    printf("\nNow Data in the list is \n");
    displaythatList();

    
     // Insert data at the end of the singly linked list
     
    printf("\nEnter that data which you want to insert at end of the list: ");
    scanf("%d", &data);
    insertNodeAtheEnd(data);

    printf("\nNow Data in the list is \n");
    displaythatList();

     
     // Insert data at middle of the singly linked list
     
    printf("nEnter data to insert at the middle of the list: ");
    scanf("%d", &data);
    printf("Enter the position for that insert new node: " );
    scanf("%d", &position);
    insertNodeAtheMiddle(data, position);

    printf("\nNow Data in the list is \n");
    displaythatList();

    printf("\nPress 1 to delete the first node: ");
    scanf("%d", &choice);

    /* Delete first node from list */
    if(choice == 1)
        deleteFirstNode();

    printf("\nNow Data in the list is \n");
    displaythatList();

    printf("\nPress 2 to delete last node: ");
    scanf("%d", &choice);

    /* Delete last node from list */
    if(choice == 2)
        deleteLastNode();

    printf("\nNow Data in the list is \n");
    displaythatList();


    return 0;
}



void creatingList(int n)//n node
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; // Link data field to data
        head->next = NULL; // Link address field to NULL

        temp = head;

        /*
         * Create n nodes and adds to linked list
         */
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

           
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; // Link data field of newNode with data
                newNode->next = NULL; // Link address field of newNode with NULL

                temp->next = newNode; // Link previous node i.e. temp to the newNode
                
                temp = temp->next; 
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

//1 insert new node at beginning(create new node)
void insertNodeAtBeginning(int data)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link data part
        newNode->next = head; // Link address part

        head = newNode;          

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}


 // inserts at the end of the linked list.(create new node)
 
void insertNodeAtheEnd(int data)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link the data part
        newNode->next = NULL; 

        temp = head;

        // Traverse to  last (node)
        while(temp != NULL && temp->next != NULL)
            temp = temp->next;

        temp->next = newNode; // Link address part

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}
 //inserts at middle of the linked list.
 
void insertNodeAtheMiddle(int data, int position)
{
    int i;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link data part
        newNode->next = NULL;

        temp = head;

        for(i=2; i<=position-1; i++) // Traverse to the n-1 position 
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            /* Link address part of new node */
            newNode->next = temp->next; 

            /* Link address part of n-1 node */
            temp->next = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}

//Deletes the first node 
 
void deleteFirstNode()
{
    struct node *toDelete;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        head = head->next;

        printf("\nData deleted = %d\n", toDelete->data);

                             // Clears the memory OF first node
        free(toDelete);

        printf("DELETETION DONE FOR FIRST NODE  FROM LIST\n");
    }
}


 // Delete last node of the linked list

void deleteLastNode()
{
    struct node *toDelete, *secondLastNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        secondLastNode = head;

        // Traverse to the last node 
        while(toDelete->next != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }

        if(toDelete == head)
        {
            head = NULL;
        }
        else
        {
            
            secondLastNode->next = NULL;                                         /* Disconnect link of second last node with last node */
        }

        
        free(toDelete);

        printf("DELETETION DONE FOR LAST NODE OF LIST \n");
    }
}




/*
 * Display entire list
 */
void displaythatList()
{
    struct node *temp;

    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); // Print data of current node
            temp = temp->next;                 // Move to next node
        }
    }
}