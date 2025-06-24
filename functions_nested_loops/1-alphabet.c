#include "main.h"


/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 *
 * Description: This function uses a loop to print all lowercase letters
 * from 'a' to 'z' using the _putchar function, followed by a newline.
 */

void print_alphabet(void)
  /* ... */
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar (i);
}
_putchar('\n');
return;
}
