#include "main.h"  // Assuming _putchar is declared here, or add declaration below

/* Declare _putchar if not declared in any header */
int _putchar(char c);

int main(void)
{
    char c;

    c = 'A';
    if (_isupper(c))
        _putchar('1');
    else
        _putchar('0');

    c = 'a';
    if (_isupper(c))
        _putchar('1');
    else
        _putchar('0');

    _putchar('\n');

    return (0);
}


