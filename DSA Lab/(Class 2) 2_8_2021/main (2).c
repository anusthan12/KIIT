/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
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
    
	printf("Element  not  found please try again");
}