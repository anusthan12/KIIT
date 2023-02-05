#include <stdio.h>

int main()
{
  int  array[10];
  int  n, i, j, t, flag = 0;

  printf("*************Inseration Sort********************");
  printf("\n\nEnter number of elements you want = \n");
  scanf("%d", &n);

  printf("Enter those %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 1 ; i <= n - 1; i++) {
    t = array[i];

    for (j = i - 1 ; j >= 0; j--) {
      if (array[j] > t) {
        array[j+1] = array[j];
        flag = 1;
      }
      else
        break;
    }
    if (flag)
      array[j+1] = t;
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }


  for (i = 1 ; i <= n - 1; i++) {
    t = array[i];

    for (j = i - 1 ; j >= 0; j--) {
      if (array[j] < t) {
        array[j+1] = array[j];
        flag = 1;
      }
      else
        break;
    }
    if (flag)
      array[j+1] = t;
  }

  printf("Sorted list in Decending order:\n");

  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }

  printf("\n*************Inseration Sort Done sucessfully********************");
  return 0;
}