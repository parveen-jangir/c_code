#include <stdio.h>
int main()
{
    int A[2][2], B[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("enter value for A[%d][%d] : ",i,j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("value of A[%d][%d] : %d\n", i, j, A[i][j]);
        }
    }
    return 0;
}