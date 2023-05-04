#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1
 * or b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num10;
int i;
num10 = 0;
i = 0;
if (b == NULL)
return (0);
for (; b[i]; i++)
{
if (b[i] < 48 || b[i] > 49)
{
return (0);
}
num10 = 2 * num10 + (b[i] - 48);
}
return (num10);
}
