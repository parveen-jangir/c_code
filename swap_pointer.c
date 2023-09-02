#include <stdio.h>

void A(int *a, int *b);

int main()
{
    int a = 2, b = 5;

    A(&a, &b);
    printf("\nvalue of a=%d \nb=%d ", a, b);

    return 0;
}

void A(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("\nvalue of a=%d \n b=%d", *a, *b);
}