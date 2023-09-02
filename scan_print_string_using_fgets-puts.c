#include <stdio.h>

int main()
{
    char line[20];
    printf("Enter a string :");
    fgets(line, 20, stdin); // you can scan 20 char include "\o" (include space)
    puts(line);             // print scaned string
}