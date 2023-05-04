#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number
 * @m: number
 * Return: the number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, j;
unsigned long int temp;
unsigned long int a;
i =  63;
j = 0;
a = n ^ m;
for (; i >= 0; i--)
{
temp = a >> i;
if (temp & 1)
{
j++;
}
}
return (j);
}

