#include "main.h"
/**
 * print_sign -  prints the sign of a number
 * @n: the number
 * Return: (0) sign (0), (1) sign (+), (-1) sign (-)
*/
int print_sign(int n)
{
if  (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
_putchar('-');
return (-1);
}
