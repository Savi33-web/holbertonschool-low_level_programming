#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the lowercase alphabet followed by a newline.
 * Description: This function uses a loop to print all lowercase letters
 * from 'a' to 'z' using the _putchar function, followed by a newline.
 */
void print_alphabet_x10(void)
{
  int i, j;

 for (i = 'a'; i <= 'z'; i++)
   for(j = 0 ; j <= 10 ; j++)
{    
_putchar(i);
}
_putchar('\n');    
return;
}
