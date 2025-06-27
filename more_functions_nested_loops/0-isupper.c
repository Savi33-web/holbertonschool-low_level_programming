#include "main.h"


/**
 * main -  Declare _putchar if not declared in any header
 * Return: Always 0
 */
int _isupper(int c);

{
    char c;
    int _putchar(char c);
    
    c = 'A';
    { if (_isupper(c))
        _putchar('1');}
    {
    else
        _putchar('0');
    }
    {
    c = 'a';
    if (_isupper(c))
      _putchar('1');}
    else 
    {        _putchar('0');

    _putchar('\n');
    }
    return (0);
}


