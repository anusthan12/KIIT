#include<stdio.h>
int main()
{

    int n;
    printf("Enter the number of processes= ");
    scanf("%d",&n);
    int bt[n],at[n],wt[n];

    printf("Enter arrive time of the processes= \n");
    for(int i=0;i<n;i++){
        scanf("%d",&at[i]);
    }
     printf("Enter burst time of the processes= \n");
    for(int i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }
    int total=0;
    int burst=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
            wt[i]=at[i];
        else
            wt[i]=burst-at[i];
        burst+=bt[i];
        total+=wt[i];
    }

    int avgWT;
    avgWT=total/n;

    printf("\n");

    printf("Waiting time= \n");
    for(int i=0;i<n;i++){
        printf("%d\n",wt[i]);
    }

    printf("Average waiting time= %d",avgWT);





    return 0;
}
