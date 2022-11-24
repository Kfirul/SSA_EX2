#include <stdio.h>
#include <math.h>
#define SIZE 10

int mat[SIZE][SIZE];
// Test function
void printMat(int a[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void floydWarshallAlgorithm(int a[SIZE][SIZE])
{

    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {

                if (a[i][k] != 0 && a[k][j] != 0 && i != j)
                {

                    if (a[i][j] == 0)
                        a[i][j] = a[i][k] + a[k][j];

                    else
                        a[i][j] = fmin(a[i][j], a[i][k] + a[k][j]);
                
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
        floydWarshallAlgorithm(mat);
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
