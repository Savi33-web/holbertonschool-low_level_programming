#include "main.h"
#include <ctype.h>

/**
 * main - Tests the isupper function using _putchar
 *
 * Return: Always 0.
 */
int main(void)
{
    char c = 'G';

    if (isupper(c))
        _putchar('1');  // Output '1' if c is uppercase
    else
        _putchar('0');  // Output '0' otherwise

    _putchar('\n');
    return (0);
}

