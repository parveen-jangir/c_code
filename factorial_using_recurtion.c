#include <stdio.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter a no. :");
    scanf("%d", &n);

    printf("factorial is : %d", factorial(n));
    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int fact = factorial(n - 1) * n;
    return fact;
}