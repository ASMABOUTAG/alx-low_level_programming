# include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @n: the number.
 * Return: (ldigi) is the last digi.
*/
int print_last_digit(int n)
{
int ldigi;
ldigi = n % 10;
if (n < 0)
{
ldigi = (n * -1) % 10;
}
_putchar(ldigi + '0');
return (ldigi);
}
