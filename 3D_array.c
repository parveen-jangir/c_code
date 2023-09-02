#include <stdio.h>
int main()
{
    int A[2][2][2] = {{{6, 8}, {2, 78}}, {{5, 7}, {3, 71}}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("value of A[%d][%d][%d] :%d\n", i, j, k, A[i][j][k]);
            }
        }
    }
    return 0;
}
