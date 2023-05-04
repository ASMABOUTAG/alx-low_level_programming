#include "main.h"
/**
 * print_binary - t prints the binary representation of a number
 * @n: input
 * Return: Nothing
*/
void print_binary(unsigned long int n)
{
unsigned long int temp;
int i, j;
i = 63;
j = 0;
for (; i >= 0; i--)
{
temp = n >> i;
if (temp & 1)
{
_putchar(49);
j++;
}
else if (j)
_putchar(48);
}
if (!j)
_putchar(48);
}
