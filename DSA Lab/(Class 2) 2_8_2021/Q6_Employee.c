#include <stdio.h>
struct empl
{
    int id,basic;
    char name[100], desig[100], dept[100];
    char gender;
    float gross;
    
};
int main()
{
    float da, ha;
    struct empl b[10];
    int n;
    printf("Enter No Of Employee : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the employee id = ");
        scanf("%d", &b[i].id);
        printf("Enter the employee Name = ");
        scanf(" %[^\n]%*c", b[i].name);
        printf("Enter the employee Gender = ");
        scanf(" %[^\n]%*c", &b[i].gender);
        printf("Enter the employee designation = ");
        scanf(" %[^\n]%*c", b[i].desig);
        printf("Enter employee dept = ");
        scanf(" %[^\n]%*c", b[i].dept);
        printf("Enter basic pay = ");
        scanf("%d", &b[i].basic);
        da = (75 * b[i].basic) / 100.0;
        ha = (25 * b[i].basic) / 100.0;
        b[i].gross = b[i].basic + ha + da ;
        printf("\n");
    }
    int i = 0;
    
    
    for (int i = 0; i < n; i++)
    {   printf("\nEmployee id =");
        printf("%d",  b[i].id);
        printf("\nEmployee name ");
        printf("%s",b[i].name);
        printf("\nEmployee Gender ");
        printf("%c",b[i].gender);
        printf("\nEmployee desig ");
         printf("%s",b[i].desig);
         printf("\nEmployee dept  ");
         printf("%s",b[i].dept);
         printf("\nEmployee gross");
         printf("%.2f",b[i].gross);

    }
        


    return 0;
}

/*#include <stdio.h>
struct empl
{
    int id,basic;
    char name[100], desig[100], dept[100];
    char gender;
    float gross;
    
};
int main()
{
    float da, ha;
    struct empl b[10];
    int n;
    printf("Enter No Of Employee : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the employee id = ");
        scanf("%d", &b[i].id);
        printf("Enter the employee Name = ");
        scanf(" %[^\n]%*c", b[i].name);
        printf("Enter the employee Gender = ");
        scanf(" %c", &b[i].gender);
        printf("Enter the employee designation = ");
        scanf(" %[^\n]%*c", b[i].desig);
        printf("Enter employee dept = ");
        scanf(" %[^\n]%*c", b[i].dept);
        printf("Enter basic pay = ");
        scanf("%d", &b[i].basic);
        da = (75 * b[i].basic) / 100.0;
        ha = (25 * b[i].basic) / 100.0;
        b[i].gross = b[i].basic + ha + da ;
        printf("\n");
    }
    int i = 0;
    printf("\nemployee id\temployee Name\temployee Gender\temployee desig\temployee dept\tGross Pay\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d\t%s\t%c\t%s\t%s\t%.2f\n", b[i].id, b[i].name, b[i].gender, b[i].desig, b[i].dept, b[i].gross);
    }
    return 0;
}
*/