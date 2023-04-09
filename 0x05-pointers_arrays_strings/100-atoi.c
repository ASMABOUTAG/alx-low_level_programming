#include "main.h"
/**
 * _atoi -  convert a string to an integer.
 * @s: a char.
 * Return: return the integer.
*/
int _atoi(char *s)
{
int i;
unsigned int num = 0;
int sign = 1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 48 && s[i] <= 57)
num = num * 10 + (s[i] - 48);
if (s[i] == 45)
{
sign = -1 * sign;
}
}
num = num *sign;
return (num);
}
