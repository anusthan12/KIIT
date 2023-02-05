#include <stdlib.h>
#include <stdio.h>
struct student
{
 int roll, class, mark;
 char name[50];
}
int main(void)
{
 struct student s[3], *ptr;
 for (int i = 0; i < 3; i++)
 {
printf("\n\nEnter the roll no of the student = ");

 scanf("%d", &s[i].roll);
 printf("Enter the name  of the student = ");
 scanf("%s", &s[i].name);
 printf("Enter the class  of the student = ");
 scanf("%d", &s[i].class);
 printf("Enter the marks of the student = ");
 scanf("%d", &s[i].mark);
 }
 ptr = s;
 for (int i = 0; i < 3; i++)
 {
 printf("Name : %s\n", ptr->name);
 printf("Roll : %d\n", ptr->roll);
 printf("Class : %d\n", ptr->class);
 printf("Marks : %d\n\n", ptr->mark);
 ptr++;
 } }
