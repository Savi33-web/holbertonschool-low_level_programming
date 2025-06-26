#include "main.h"

/**
 * main - Write a function that prints the 9 times table, starting with 0.
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i;


 {
for (i = 1; i < 10; i++)
{
    _putchar(i + '0');
    _putchar('\n');
}
 
    times_table();
    return;
}
