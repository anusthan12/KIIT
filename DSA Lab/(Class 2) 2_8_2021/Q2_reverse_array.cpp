
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter the no of elements in the array = ");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements of array = \n");
    for(int i=0;i<n;i++)
     {scanf("%d",&arr[i]);}
    printf("Reversed format of the  array are = \n");
    for(int i=n-1;i>=0;i--)
     {printf("%d \n",arr[i]);}
}