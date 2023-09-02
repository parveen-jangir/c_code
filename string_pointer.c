#include <stdio.h>

int main()
{
   char *pp = "Papa"; // you can write *pp or pp[]
   printf("%u\n", &pp[0]);
   printf("%u\n", &pp[1]);
   printf("%u\n", &pp[2]);
   printf("%u\n", &pp[3]);

   char *ptr = &pp[3];
   printf("%c\n", *ptr);

   return 0;
}