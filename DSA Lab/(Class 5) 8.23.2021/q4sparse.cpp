// Q4
#include<stdio.h>
int main()
{
    int sparseMatrix[5][5] =
    {

        {0 , 1 , 5, 0 , 0 },

        {3 , 0 , 0 , 0 , 0 },

        {0 , 0 , 7 , 0 , 9 },
        
        {0 , 0 , 0 , 4 , 9 },

        {0 , 2 , 0 , 0 , 8 }

    };
    int nsize = 0;

    for (int i = 0; i < 5; i++)

        for (int j = 0; j < 5; j++)

            if (sparseMatrix[i][j] != 0)

                nsize++;
 
    int compactMat[3][nsize];
    int k = 0;                       // yeha se naya matrix banega

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (sparseMatrix[i][j] != 0)
            {
                compactMat[0][k] = i;
                compactMat[1][k] = j;
                compactMat[2][k] = sparseMatrix[i][j];
                k++;
            }

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<nsize; j++)
            printf("%d ", compactMat[i][j]);
        printf("\n"); // printing machine

    }
    return 0;
}