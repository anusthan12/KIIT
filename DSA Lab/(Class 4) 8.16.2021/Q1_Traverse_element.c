#include<stdio.h>
#include<conio.h>
int main()
{
    int num1;
    printf("Enter the size of the array = ");
    scanf("%d",&num1);
    int arr[num1],i;
    printf("Enter array the  elements in the array: ");
    for(i=0;i<num1;i++)
    scanf("%d",&arr[i]); 
    printf(" Array = ");
    for(i=0;i<num1;i++)
    printf("%d\t",arr[i]);
    return 0;
    getch();
}
