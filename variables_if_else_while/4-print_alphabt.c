#include <stdio.h>

/**
 * main - prints alphabet in lower case, followed by a new line
 *
 * Return 0 (Success)
 */

int main (void)
  {
    char letter;

    for (letter = 'a'; letter <= 'z'; letter ; letter++)
  
    if(letter !='e' && letter !='q') 
    putchar(letter);
    
    putchar('\n');
    return (0);
}
