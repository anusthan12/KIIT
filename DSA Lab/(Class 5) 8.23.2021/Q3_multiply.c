#include<stdio.h>
#include<conio.h>

struct poly
{
  int degree;
  int coeff;
};				
void main ()
{
  struct poly poly1[10], poly2[10], multi[100];
  int n1, n2, count = -1;
  int i, j;
  printf ("\nEnter Size Of the  1st Polynomial: ");
  scanf ("%d", &n1);
  for (i = 0; i < n1; i++)
    {
      printf ("\nEnter its Degree: ");
      scanf ("%d", &poly1[i].degree);
      printf ("\nEnter its Coefficient: ");
      scanf ("%d", &poly1[i].coeff);
    }				
  printf ("\nEnter Size of the Of 2nd Polynomial: ");
  scanf ("%d", &n2);
  for (i = 0; i < n2; i++)
    {
      printf ("\nEnter its Degree: ");
      scanf ("%d", &poly2[i].degree);
      printf ("\nEnter its Coefficient: ");
      scanf ("%d", &poly2[i].coeff);
    }				
  for (i = 0; i < n1; i++)
    {
      for (j = 0; j < n2; j++)
	{
	  multi[++count].degree = poly1[i].degree + poly2[j].degree;
	  multi[count].coeff = poly1[i].coeff * poly2[j].coeff;
	}			
    }				
  printf ("\nThe Multiplication Of the Two Polynomialsi is = \n");
  for (i = 0; i <= count; i++)
    {
      if (multi[i].degree == 0)
	printf ("%d ", multi[i].coeff);
      else if (multi[i].degree == 1)
	printf ("%dx ", multi[i].coeff);
      else
	{
	  printf ("%dx^%d ", multi[i].coeff, multi[i].degree);
	}
      if (i != count)
	printf ("+ ");
    }				
  getch (); 
}