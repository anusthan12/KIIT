#include <stdio.h>
int main()
{
  int array[10];
  int  no_of_ele, i, j, swap;

  printf("*************Bubble Sort********************");
  printf("\n\nEnter number of elements you want = \n");
  scanf("%d", &no_of_ele);

  printf("Enter those %d integers\n", no_of_ele);

  for (i = 0; i < no_of_ele; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i < no_of_ele - 1; i++)
  {
    for (j = 0 ; j < no_of_ele - i - 1; j++)
    {
      if (array[j] > array[j+1]) 
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < no_of_ele; i++)
     printf("%d\n", array[i]);

printf("If You want decending order too then press E(for excuting) and enter");
//decreasing order
for (i = 0; i < no_of_ele; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i < no_of_ele - 1; i++)
  {
    for (j = 0 ; j < no_of_ele - i - 1; j++)
    {
      if (array[j] < array[j+1]) 
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

 printf("Sorted list in decending order:\n");

  for (i = 0; i < no_of_ele; i++)
     printf("%d\n", array[i]);


printf("\n*************Bubble Sort Done succesfully********************");
  return 0;
}