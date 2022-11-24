#include <stdio.h>
#include <math.h>
#define SIZE 10

int mat[SIZE][SIZE];
// Test function
void printMat()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void floydWarshallAlgorithm()
{

    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {

                if (mat[i][k] != 0 && mat[k][j] != 0 && i != j)
                {

                    if (mat[i][j] == 0)
                        mat[i][j] = mat[i][k] + mat[k][j];

                    else
                        mat[i][j] = fmin(mat[i][j], mat[i][k] + mat[k][j]);
                
                }
            }
        }
    }
}
    void makeMat()
    {
        int i, j;
        for (i = 0; i < SIZE; i++)
        {
            for (j = 0; j < SIZE; j++)
                scanf("%d", &mat[i][j]);
            }
        floydWarshallAlgorithm();
    }

    void isConnect()
    {
        int i, j;
        scanf("%d %d", &i, &j);
        if (mat[i][j] == 0)
            printf("False\n");
        else
            printf("True\n");
    }

    void shortestPath()
    {
        int i, j;
        scanf("%d %d", &i, &j);
        if (mat[i][j] == 0)
            printf("-1\n");
        else
            printf("%d\n", mat[i][j]);
    }
