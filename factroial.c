#include <stdio.h>
int main()
{
    int num, factorial = 1;
    printf("Enter a no.");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        factorial = i * factorial;
    }
    printf("Factorial is :%d", factorial);
}