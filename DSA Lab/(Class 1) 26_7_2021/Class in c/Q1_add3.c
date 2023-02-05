#include <stdio.h>  // By Anusthan Singh(20051337)
#include <conio.h>
addition(int,int,int);
void main()
{
	int a,b,c,d;
	
	printf("\nEnter the values of any three no: ");
	scanf("%d %d %d",&a,&b,&c);

	d=addition(a,b,c);
	printf("\nAddition = %d",d);
	
}
addition(int num1,int num2,int num3)
{
	int ans;
	ans=num1+num2+num3;
	return(ans);
}