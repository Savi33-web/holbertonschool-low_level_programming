#include "main.h"


/**
 * main -  Declare _putchar if not declared in any header
 * Return: Always 0
 */
int _isupper(int c);

{
    
    c = 'A';
    { if ((c >= 'A' && c <= 'Z'))
        _putchar('1');}
    {
    else
        _putchar('0');
    }
    {
    c = 'a';
    if ((c >= 'a' && c <= 'z'))
      _putchar('1');}
    else 
    {        _putchar('0');

    _putchar('\n');
    }
    return (0);
}


