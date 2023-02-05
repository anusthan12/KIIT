#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter no. of terms in the expression : ");
    scanf("%d",&x);
    int coe[x],exp[x];
    for(int i=0;i<x;i++){
        printf("Enter the coefficient of %d term : ",i+1);
        scanf("%d",&coe[i]);
        printf("Enter the exponent of %d term : ",i+1);
        scanf("%d",&exp[i]);
    }
    printf("The polynomial would be : \n");
    for(int i=0;i<x-1;i++){
        printf("%dx^%d+",coe[i],exp[i]);
    }
    printf("%dx^%d",coe[x-1],exp[x-1]);
    return 0;
    getch();
}