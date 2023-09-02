#include <stdio.h>

int main()
{
    int array[3][3], temp[3][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter vlaue of array of index[%d][%d] :",i,j);
            scanf("%d", &array[i][j]);
            temp[j][i] = array[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            array[i][j] = temp[i][j];
            printf("  %d[%d][%d]", array[i][j], i, j);
        }
        printf("\n");
    }
}