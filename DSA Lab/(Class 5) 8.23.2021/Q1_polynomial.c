
#include <math.h>
#include <stdio.h>
#include <conio.h>
#define MAX 20
void intit(int p[])
{
  int i;
  for (i = 0; i < MAX; i++)
    p[i] = 0;
}
void read(int p[])
{
  int n, i, power, coeff;
  intit(p);
  printf("\n Enter number of terms :");
  scanf("%d", &n);
  
  for (i = 0; i < n; i++)
  {
    printf("\nenter %d term(coeff.,power)", i + 1);
    scanf("%d%d", &coeff, &power);
    p[power] = coeff;
  }
}
void print(int p[])
{
  int i;
  for (i = 0; i < MAX; i++)
    if (p[i] != 0)
      printf("%d x^%d ", p[i], i);
}
void add(int p1[], int p2[], int p3[])
{
  int i;
  for (i = 0; i < MAX; i++)
    p3[i] = p1[i] + p2[i];
}
void subtract(int p1[], int p2[], int p3[])
{
  int i;
  for (i = 0; i < MAX; i++)
    p3[i] = p1[i] - p2[i];
}
void multiply(int p1[], int p2[], int p3[])
{
  int i, j;
  intit(p3);
  for (i = 0; i < MAX; i++)
    for (j = 0; j < MAX; j++)
      p3[i + j] = p3[i + j] + p1[i] * p2[j];
}
void main()
{
  int p1[MAX], p2[MAX], p3[MAX];
  int option;
  do
  {
    printf("\n1 : create 1st polynomial");
    printf("\n2 : create 2nd polynomial");
    printf("\n3 : Add polynomials");
    printf("\n4 : Subtract polynomials");
    printf("\n5 : Multiply polynomials");
    printf("\n6 : Quit");
    printf("\nEnter your choice :");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      read(p1);
      break;
    case 2:
      read(p2);
      break;
    case 3:
      add(p1, p2, p3);
      printf("\n1st polynomial -> ");
      print(p1);
      printf("\n2nd polynomial -> ");
      print(p2);
      printf("\n Sum = ");
      print(p3);
      break;
    case 4:
      subtract(p1, p2, p3);
      printf("\n1st polynomial -> ");
      print(p1);
      printf("\n2nd polynomial -> ");
      print(p2);
      printf("\n Diff = ");
      print(p3);
      break;
    case 5:
      multiply(p1, p2, p3);
      printf("\n1st polynomial -> ");
      print(p1);
      printf("\n2nd polynomial -> ");
      print(p2);
      printf("\n Product = ");
      print(p3);
      break;
    }
  } while (option != 6);
}