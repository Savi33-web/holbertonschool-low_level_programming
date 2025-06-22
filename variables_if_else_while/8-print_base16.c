#include<stdio.h>


/**
 * main - Prints all the numbers of base 16 in lowercase,
 *        followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char number;

	/* Print digits 0 to 9 */
	for (number = '0'; number <= '9'; number++)
		putchar(number);

	/* Print letters a to f */
	for (number = 'a'; number <= 'f'; number++)
		putchar(number);

	putchar('\n');
	return (0);
}

