#include <stdio.h>
int main()
{
    int A[3], B[3];
    printf("enter value of A[0] to A[3] :");
    for (int i = 0; i <= 3; i++)
        scanf("%d", &A[i]);
    printf("enter for of B[0] to B[3] :");
    for (int i = 0; i <= 3; i++)
        scanf("%d", &B[i]);
    for (int i = 0; i <= 3; ++i)
        printf("value of A[%d]+B[%d] :%d\n", i, i, A[i] + B[i]);
}
