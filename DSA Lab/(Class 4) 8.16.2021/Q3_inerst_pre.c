
#include <stdio.h>
 
int main()
{
    int arr[100] = { 0 };
    int i, x, insert, n = 10;
    
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
 
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    x = 50;
    insert = 5;

    n++;
    for (i = n-1; i >= insert; i--)
        arr[i] = arr[i - 1];
 
    arr[insert - 1] = x;
 
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}