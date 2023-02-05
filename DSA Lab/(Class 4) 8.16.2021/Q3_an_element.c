#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *array = malloc(sizeof(int) * size);
    printf("Enter elements in array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Array after Operation: ");
    for (int i = 0; i < (size / 2); i++)
    {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}