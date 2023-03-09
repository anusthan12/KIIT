#include<stdio.h>

int main(void) 
{
	int i, j, k, temp, n;
	int arr[100];
	
	printf("enter size of array : \n");
	scanf_s("%d", &n);
	
	printf("Enter %d numbers: \n", n);
	
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]) 
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	printf(" After Sorting Elements are : \n");
	
	for (i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}
}
