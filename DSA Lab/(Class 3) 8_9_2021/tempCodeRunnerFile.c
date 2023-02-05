#include<stdio.h>

int main()
{
  	int arr[10], n, i, find, Flag;
  
  	printf("\nEnter the size of array =  ");
  	scanf("%d",&n);
 
  	printf("\nEnter %d elements of the array= \n", n);
  	for(i = 0; i < n; i++)
   	{
   	 	scanf("%d",&arr[i]);
   	}
	printf("\nEnter the Element to Search  =  ");
  	scanf("%d",&find);      

  	Flag = 0;
  	for(i = 0; i < n; i++)
   	{
   		if(arr[i] == find)
     	{
       		Flag = 1;
       		break;
	 	}   
   	}
  
  	if(Flag == 1)
  	{
  		printf("\nfounded the Search Element was %d at at the Position %d ", find, i + 1);
	}
	else
	{
		printf("\n Not found the the Search Element %d ", find);
	}	
  	return 0;
}