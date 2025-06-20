#include <stdio.h>

/**
 * main - prints alphabet in lower case, followed by a new line
 *
 * Return 0 (Success)
 */

int main (void)
  {
    char letter;

    for (letter = 'a'; letter <= 'z'; letter !='e'; letter !='q'; letter++)
        putchar(letter);


    putchar('\n');
    return (0);
}
