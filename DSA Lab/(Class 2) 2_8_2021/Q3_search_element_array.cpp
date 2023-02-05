#include <stdio.h>
#include <conio.h>
 
int main()
{
    int a[10000],i,n,found;
   
    printf("Enter the number of element in  array : ");
    scanf("%d", &n);
    printf("Input  elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the number to find : ");
    scanf("%d", &found);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==found)
        {
			printf("Element found = ");
			 printf("%d",found);
            return 0;		 
        }
    }
 
    }