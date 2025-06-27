#include "main.h"

/**
 * main - tests _isupper function
 *
 * Return: Always 0
 */
int main(void)
{
    _putchar(_isupper('G') + '0'); // prints '1'
    _putchar(_isupper('g') + '0'); // prints '0'
    _putchar('\n');
    int c = '5';
    if (_isdigit(c))
        printf("%c is a digit\n", c);
    else
        printf("%c is not a digit\n", c);

    return (0);

}
