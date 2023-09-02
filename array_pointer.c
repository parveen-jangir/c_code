#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("Value of %d index : ", i);
        scanf("%d", ptr + i); //save value of array through pointer
    }
    printf("You are successfully add value through Pointer in array \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value of %d index : %d\n", i, arr[i]); //print value of array index
    }
}