#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    int choice, d;

    printf("enter your choice\n1=addition\n2=subtraction\n4=divsion\n3=multiplication\n5=Remainder\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("enter value of a and b");
        scanf("%d%d", &a, &b);
        printf("Ans : %d", a + b);
    case 2:
        printf("enter value of a and b");
        scanf("%d%d", &a, &b);
        printf("Ans : %d", a - b);
    case 3:
        printf("enter value of a and b");
        scanf("%d%d", &a, &b);
        printf("Ans : %d", a / b);
    case 4:
        printf("enter value of a and b");
        scanf("%d%d", &a, &b);
        printf("Ans : %d", a * b);
    case 5:
        printf("enter value of a and b");
        scanf("%d%d", &a, &b);
        printf("Ans : %d", a % b);
    }
}