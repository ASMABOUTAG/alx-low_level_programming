#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: the number
 * Return: (n) positive number, (c) negative number
 *
*/
int _abs(int n)
{
int c;
if (n >= 0)
return (n);
else if (n < 0)
{
c = n * -1;
return (c);
}
}
