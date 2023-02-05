
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,a,i;

    printf("\nEnter the size of array = ");
    scanf("%d",&a);

    ptr = (int*)malloc(10 * sizeof(int));

    printf("\n Enter its %d elements = ",a);

    for (i=0;i<a;i++)
    scanf("%d",(ptr+i));
    printf("After the allocation your array becomes =");
    for (i=0;i<a;i++)
    
    printf("%d",*(ptr+i));
      return 0;
}