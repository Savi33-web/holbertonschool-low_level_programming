#include "main.h"
#include <stdio.h>
#include <stdlib.h> // Needed for abs()

/**
 * main - Demonstrates use of abs()
 * Return: Always 0.
 */
int main(void)
{
  int r;
  int s;
  int t;
  int u;

  int r= -1;
  int s = 0;
  int t = 1;
  int u = -98;
  {
    r = abs(r);
    _putchar('r');
    _putchar('s');
    _putchar('t');
    _putchar('u');
  }
    return 0;
}
