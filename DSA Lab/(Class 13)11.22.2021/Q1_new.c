#include <stdio.h>

void bubble_sort_ac(int [], int);
void bubble_sort_de(int [], int n);

int main()
{
  int array[10], n, i;

  printf("*************Bubble Sort********************");
  printf("\n\nEnter number of elements you want = \n");
  scanf("%ld", &n);

  printf("Enter %ld integers\n", n);
  for (i = 0; i < n; i++)
    scanf("%ld", &array[i]);

  bubble_sort_ac(array, n);

  printf(" Bubble Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
     printf("%ld\n", array[i]);

bubble_sort_de(array, n);
printf(" Bubble Sorted list in decending order:\n");

  for (i = 0; i < n; i++)
     printf("%ld\n", array[i]);

     printf("\n*************Bubble Sort Done succesfully********************");

  return 0;
}

void bubble_sort_ac(int arr[], int n)
{
  int i, j, swap;

  for (i = 0 ; i < n - 1; i++) {
    for (j = 0 ; j < n - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        
        swap         = arr[j];
        arr[j]   = arr[j+1];
        arr[j+1] = swap;
      }
    }
  }
}


void bubble_sort_de( int arr[], int n)
{
  int i, j, swap;

  for (i = 0 ; i < n - 1; i++) {
    for (j = 0 ; j < n - i - 1; j++) {
      if (arr[j] < arr[j+1]) {
        
        swap         = arr[j];
        arr[j]   = arr[j+1];
        arr[j+1] = swap;
      }
    }
  }
}