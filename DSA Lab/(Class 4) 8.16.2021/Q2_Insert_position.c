
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size, element, position;   
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }    
    printf("Enter element which you want to insert : ");
    scanf("%d", &element);
    printf("Enter that  position : ");
    scanf("%d", &position);

    if(position > size+1 || position <= 0)
    {
        printf(" Not possible! Please enter position between 1 to %d", size);
    }
    else
    {
        for(i=size; i>=position; i--) // // New room by right shift kar ke
        {
            arr[i] = arr[i-1];
        }
        arr[position-1] = element;   //Insertation
        size++; 

        printf(" The New Array after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d  ", arr[i]);
        }
    }

    return 0;
}