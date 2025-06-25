#include "main.h"
#include <stdio.h>
#include <stdlib.h> // Needed for abs()

/**
 * main - Demonstrates use of abs()
 * Return: Always 0.
 */
int main(void)
{
    int r = -10;

    r = abs(r);
    printf("%d\n", r);

    return 0;
}
