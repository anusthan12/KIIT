#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
typedef struct {
    int task;
    int machine;
    int time;
} Result;

int main(){

    printf("\nEnter number of machines and tasks: ");
    int nT, nM; scanf("%d%d", &nM, &nT);

    int **minMin = malloc(nM * sizeof(int*));
    for(int i = 0; i < nM; i++){
        minMin[i] = malloc(nT * sizeof(int));
    }
    printf("Fill Data :\n");
    for(int i = 0; i < nM; i++){
        for(int j = 0; j < nT; j++)
            scanf("%d", &minMin[i][j]);
    }
    printf("\nOriginal Data\n");
    for(int i = 0; i < nM; i++) {
        for(int j = 0; j < nT; j++)
            printf("%d ",minMin[i][j]);
        printf("\n");
    }

    Result *res = malloc(nT * sizeof(Result));
    int ptr = -1;

    while(ptr < nT-1){
        int *time = malloc(nT * sizeof(int));
        int *machine = malloc(nT * sizeof(int));

        for(int j = 0; j < nT; j++){
            int mintime = INT_MAX;
            int pos = -1;
            for(int i = 0; i < nM; i++){
                if(minMin[i][j] < mintime){
                    mintime = minMin[i][j];
                    pos = i;
                }
            }
            time[j] = mintime;
            machine[j] = pos;
        }
        int mintime = INT_MAX;
        int pos = -1;
        for(int j = 0; j < nT; j++){
            if(time[j] < mintime && time[j] != INT_MAX){
                mintime = time[j];
                pos = j;
            }
        }

        res[++ptr].task = pos;
        res[ptr].machine = machine[pos];
        res[ptr].time = mintime;

        for(int i = 0; i < nM; i++){
            for(int j = 0; j < nT; j++){
                if(j == res[ptr].task)
                    minMin[i][j] = INT_MAX;
                else if(i == res[ptr].machine && minMin[i][j] != INT_MAX)
                    minMin[i][j] += mintime;
                else
                    continue;
            }
        }
    }

    printf("\nScheduled Task are :\n");
    for(int i = 0; i < nT; i++){
        printf("Task %d Runs on Machine %d with Time %d units\n",res[i].task+1,res[i].machine+1,res[i].time);
    }

    return 0;
}
