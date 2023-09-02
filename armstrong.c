#include <stdio.h>
int main()
{
    int n, m, a, b, c, d, e;
    printf("enter any no. to check armstrom :");
    scanf("%d", &n);

    e = n / 10000;
    d = n / 1000 - e * 10;
    c = n / 100 - d * 10 - e * 100;
    b = n / 10 - c * 10 - d * 100 - e * 1000;
    a = n - b * 10 - c * 100 - d * 1000 - e * 10000;

    if (n / 10000 == 0 && n / 1000 == 0 && n / 100 == 0 && n / 10 == 0)
    {
        m = a;
        if (n == m)
            printf("%d is armstrom no.", n);
        else
            printf("%d is not armstrom no.", n);
    }
    else if (n / 10000 == 0 && n / 1000 == 0 && n / 100 == 0)
    {
        m = a * a + b * b;
        if (n == m)
            printf("%d is armstrom no.", n);
        else
            printf("%d is not armstrom no.", n);
    }
    else if (n / 10000 == 0 && n / 1000 == 0)
    {
        m = a * a * a + b * b * b + c * c * c;
        if (n == m)
            printf("%d is armstrom no.", n);
        else
            printf("%d is not armstrom no.", n);
    }
    else if (n / 10000 == 0)
    {
        m = a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d;
        if (n == m)
            printf("%d is armstrom no.", n);
        else
            printf("%d is not armstrom no.", n);
    }
    else if (n / 10000 != 0)
    {
        m = a * a * a * a * a + b * b * b * b * b + c * c * c * c * c + d * d * d * d * d + e * e * e * e * e;
        if (n == m)
            printf("%d is armstrom no.", n);
        else
            printf("%d is not armstrom no.", n);
    }
}