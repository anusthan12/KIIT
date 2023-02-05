/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
 
int main()
{
    int a[10000],i,j,n,c,b;
   
    printf("Enter the number of element in  array : ");
    scanf("%d", &n);
    printf("Input  elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the number that is your 'a' element : ");
    scanf("%d", &c);
    
     printf("Enter the number that is your 'b'  element : ");
    scanf("%d", &b);
     
    for(i=0; i<n; i++)
    {
        if(a[i]>=c && a[i]<=b)
         
         printf("%d ", a[i]);
         
    }
    }

