/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Q2

#include<stdio.h>

int main()
{
int i,n;
int arr[n];

printf("\nEnter the number of elements :\n");
scanf("%d",&n);
printf("\nInput the array elements :\n");

for(i=0;i<n;++i) 
scanf("%d",&arr[i]);

printf("Reverse of the given array is :\n");
for(i= n-1; i>=0;i--);
{
    printf("%d",arr[i]);
}
return 0;
}

