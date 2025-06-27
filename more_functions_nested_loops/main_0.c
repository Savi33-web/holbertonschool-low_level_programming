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
    return (0);
}
