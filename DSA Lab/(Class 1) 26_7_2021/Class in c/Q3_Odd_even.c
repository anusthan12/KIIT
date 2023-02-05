#include<stdio.h>  // By Anusthan Singh (20051337)
#include<stdlib.h>
void even_odd(int num);         
void main()
{
      int num1;
      printf("Enter any integer =\n");
      scanf("%d", &num1);
      even_odd(num1);
     
}
void even_odd(int number)        
{
    if(number%2==0)
        printf("%d is a even number\n",number);
    else
        printf("%d is a odd number\n",number);
}