#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the lowercase alphabet followed by a newline.
 * Description: This function uses a loop to print all lowercase letters
 * from 'a' to 'z' using the _putchar function, followed by a newline.
 */
void print_alphabet_x10(void)
{
int i, j;
for (int j =0 ;int j < 10; j++){       //repeat 10 times
for(int i = 'a'; int i = 'z'; i++)// prints entire alphabet }
{    
_putchar(i);
}
_putchar('\n');    
return;
}
