#include "main.h"

/**
 * main - check the code using _putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-1);
	_putchar(r + '0');
	_putchar('\n');

	r = _abs(0);
	_putchar(r + '0');
	_putchar('\n');

	r = _abs(1);
	_putchar(r + '0');
	_putchar('\n');

	r = _abs(-9); /* Prints only single digits correctly */
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}

