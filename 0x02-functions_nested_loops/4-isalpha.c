#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: the character to be checked
* Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
5-sign.c
#include "main.h"
/**
* print_sign - prints the sign of a number
* @n: the int to check
* Return: 1 and prints + if n is greater than zero
* 0 and prints 0 if n is zero
* -1 and prints - if n is less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
} else if (n == 0)
}
_putchar(48);
return (0);
} else if (n < 0)
{
_putchar('-');
}
return (-1);
}

