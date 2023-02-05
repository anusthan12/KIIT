#include<stdio.h>

void insert_sort_ac(int [], int );
void insert_sort_de(int [], int );
int main()
{
 int arr[10],i,n;
 
 printf("\n\t*************Insertion sort*****************\n\n");
 printf("Enter the number of elements you want = ");
 scanf("%d",&n);
 printf("Enter %d element : ",n);
 for(i=0; i<n; i++)
 {
    
    scanf("%d",&arr[i]);
 }
 insert_sort_ac(arr,n);
 printf("\nInsertion sorted list in ascending order : \n\n");
 for(i=0; i<n; i++)
    printf(" %d",arr[i]);
 
 insert_sort_de(arr,n);
 printf("\nInsertion sorted list in decending order :\n\n");
 for(i=0; i<n; i++)
    printf(" %d",arr[i]);
 return 0;
}
void insert_sort_ac(int arr[], int size)
{
 int i,j,tmp;
 for(i=0; i<size; i++)
 {
   for(j=i-1; j>=0; j--) 
   {
    if(arr[j]>arr[j+1])
    {
      tmp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=tmp;
    }
    else
      break;
   }
 }
}


void insert_sort_de(int arr[], int size)
{
 int i,j,tmp;
 for(i=0; i<size; i++)
 {
   for(j=i-1; j>=0; j--) 
   {
    if(arr[j]<arr[j+1])
    {
      tmp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=tmp;
    }
    else
      break;
   }
 }
}