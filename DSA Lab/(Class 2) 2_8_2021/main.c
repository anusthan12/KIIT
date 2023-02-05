/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Q1

#include<stdio.h>

int main()
{
int a[50],i,n,large,small;

printf("\nEnter the number of elements :\n");
scanf("%d",&n);
printf("\nInput the array elements :\n");

for(i=0;i<n;++i) 
scanf("%d",&a[i]);

large=small=a[0];

 for(i=1;i<n;++i)
{
 if(a[i]>large)
large=a[i];

 if(a[i]<small)
small=a[i];
}
printf("\nThe smallest element is %d\n",small);
printf("\nThe largest element is %d\n",large);

return 0;
}
