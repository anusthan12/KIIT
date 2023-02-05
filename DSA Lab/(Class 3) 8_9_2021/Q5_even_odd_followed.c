#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array = ");
    scanf("%d", &n);

    int x[n], y[n], tempo = 0;
    printf("Enter the %d Elements: \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] % 2 == 0)
        {
            y[tempo] = x[i];
            tempo++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] % 2 != 0)
        {
            y[tempo] = x[i];
            tempo++;
        }
    }
    printf("Your new array as even odd allocation = \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", y[i]);
    }
    return 0;
}