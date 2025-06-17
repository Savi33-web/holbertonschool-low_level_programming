#include <stdio.h>

/**
 * main - Entry point
 *
 * Return Always 0 (Success)
 */
int main(void)
{
  Size of a char = 1 bytes;
  Size of a int = 4 bytes;
  Size of a long int = 4 bytes;
  Size of a long long int = 8 bytes;
  Size of a float = 4 bites;

  /**
   * %d : nombre entier (int)
   * %f : nombre flottant (float)
   * %c : character (char)
   */

    printf("Size of a char: %lu byte(s)\n", sizeof(char));
    printf("Size of an int: %lu byte(s)\n", sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %lu byte(s)\n", sizeof(float));
    return(0);
}
