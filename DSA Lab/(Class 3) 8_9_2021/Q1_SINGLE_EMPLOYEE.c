
#include<stdio.h>
#include<stdlib.h>
int n;

typedef struct 
{
char dep[50],name[50],des[50],gen[6];
float basic;

}a;
int main()
{ 
    int i;
    float gp,hr,da;
 printf("Enter the number of empolyee =");
scanf("%d",&n);

 a * x= (a*) malloc(n*sizeof(a));

    for(i=0;i<n;i++)
    {
        printf("Enter the employee Name = ");
        scanf("%s",x[i].name);
        printf("Enter the employee Gender =  ");
        scanf("%s",x[i].gen);
        printf("Enter the employee Department = ");
        scanf("%s",&x[i].dep);
        printf("Enter the employee Designation = ");
        scanf("%s",&x[i].des);
        printf("Enter the employee's Basic Pay = ");
        scanf("%f",&x[i].basic);
      
        
            }
     
        printf("Name         Gender       Department    Designation   Basic Pay    Gross Pay \n");
 
    for(i=0;i<n;i++)
    {
        hr= (25.0/100.0)*x[i].basic;
        da=(75.0/100.0)*x[i].basic;
        gp= hr+da+x[i].basic;
        printf("%s       %s               %s              %s         %f     %f\n",x[i].name,x[i].gen,x[i].dep,x[i].des,x[i].basic,gp);
    }
 
   return 0;
}
