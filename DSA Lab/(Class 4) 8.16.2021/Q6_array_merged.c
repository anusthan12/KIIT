#include<stdio.h>
#include<conio.h>
int main()
{
      int n,m;
    printf("Enter the size of the  1st array  = ");
    scanf("%d",&n);
    printf("\nEnter the size of the  2nd array = ");
    scanf("%d",&m);
    int arr1[n],arr2[m],arr3[m+n],i,j;
    printf("\nEnter elements for the 1st array  = ");
    for(i=0;i<n;i++)
    scanf("%d",&arr1[i]);
    printf("\nEnter elements for the 2nd array = ");
    for(i=0;i<m;i++)
    scanf("%d",&arr2[i]);

    printf("\n Array after merged = ");
    for(i=0,j=0;i<(m+n);i++){
        if(i<n)
        arr3[i] = arr1[i];
        else{
        arr3[i] = arr2[j];
        j++;
        }
        printf("%d ",arr3[i]);
    }
    return 0;
    getch();
}