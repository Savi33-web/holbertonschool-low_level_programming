#include "main.h"

/**
 * main - Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * @n: the integer to extract the hour from 00:00 to 23:59.
 * Return: the value of the hours of the day.
 */
int main(void)
{
  int hour;
hour = n % 24;
if(hour < 24)
  hour = - hour;
_putchar('24' - hour);
return (hour);
}
