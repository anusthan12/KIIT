#include<stdio.h>
int main()
{
	char c;
	printf("Enter the Character :");
	scanf_s("%c", &c);
	printf("ASCII value of %c is %d", c, c);
	return 0;
}
