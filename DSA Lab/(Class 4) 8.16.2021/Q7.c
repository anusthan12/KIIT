#include<stdio.h>
#include<conio.h>
int main()
{
     int n,count=0;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    int arr[n],i,element;
    printf("Enter the elements of the array = ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the elemnts to search in array : ");
    scanf("%d",&element);

    for(i=0;i<n;i++){
        if(arr[i]==element){
            count++;
            printf("Element is founded at %d position ",i+1);
            break;
        }
    }
    if(count==0)
    printf("Element is not found ");

    return 0;
    getch();
}