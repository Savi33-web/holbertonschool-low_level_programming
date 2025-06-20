#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line 0
 * Return: Always 0
 */
int main(void)
{
    char number ;

    for (number = '0'; number < '9'; number++)
    for (number = '0'; number < '6'; number++)

    putchar(number);

    putchar('\n');
    return (0);
}
