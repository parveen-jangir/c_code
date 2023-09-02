#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = {'p', 'a', 'v', 'e', 'e', 'n', '\0'};
    char Name[] = "Parveen_jangir";

    printf("my name is %s\n", name);
    printf("now, my name  is %s", Name);

    scanf("%s", name);
    printf("my name is %s\n", name);

    return 0;
}