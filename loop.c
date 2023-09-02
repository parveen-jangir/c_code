#include <stdio.h>
#include <conio.h>

void main()
{
  int n;

  for (int i = 1; i < 11; i++)
  {
    n = 2 * i;
    printf("    i = %d   ", n);
  }
  getch();
}