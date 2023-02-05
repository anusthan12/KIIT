#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,diagonal_sum=0,no_zero=0,multiplication=1;

    printf("Enter the size of 2d array \n");
    scanf("%d",&n);

     int **arr = (int **)malloc(n * sizeof(int *));
    for (int i=0; i<n; i++)
         arr[i] = (int *)malloc(n * sizeof(int));

    printf("Enter the elements of the 2d array \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j]!=0) no_zero++;
        }
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            if(j>i) diagonal_sum+=arr[i][j];
        }
    }
    for (int i = 0,j=0; i < n; i++,j++)
    {
        multiplication*=arr[i][j];
    }
    printf("The elements below the minor diagonal = \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j<i) printf("%d ",arr[i][j]);
            else printf("- ");
        }
        printf("\n");
    }
    printf("Number of non-zero elements = %d\n",no_zero);
  
    printf("The sum of elements above the diagonal = %d\n ",diagonal_sum);

      printf("The product of diagonal elements = %d\n",multiplication);
    
}
