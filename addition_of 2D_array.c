#include <stdio.h>
int main()
{
    int A[2][2], B[2][2];
    printf("Vlaue of array A\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter value of A[%d][%d] :",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Vlaue of array B\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter value of B[%d][%d] :",i,j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("total A[%d][%d]+B[%d][%d] : %d\n", i, j, i, j, A[i][j] + B[i][j]);
    }

    return 0;
}