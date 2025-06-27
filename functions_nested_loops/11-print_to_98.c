#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  int n;

  for (n = 0; n < 99; n++)
  {
    print_number(n);
      _putchar (',');
    _putchar (' ');
  }

      if (n < 0)
    {
        _putchar('-');
        n = -n;
    }
    if (n / 10)
        print_number(n / 10);
    _putchar((n % 10) + '0');
  {
    int n = 42;
    print_number(n);
    _putchar('\n');
    return (0);
}
   
