#include "main.h"

/**
 * main - Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * @n: the integer to extract the hour from 00:00 to 23:59.
 * Return: the value of the hours of the day.
 */
void jack_bauer(void)

{

int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
        }
    }
}
