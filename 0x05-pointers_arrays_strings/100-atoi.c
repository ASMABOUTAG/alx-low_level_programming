#include "main.h"
/**
 * _atoi -  convert a string to an integer.
 * @s: a char.
 * Return: return the integer.
*/
int _atoi(char *s)
{
int i;
unsigned int number = 0;
int num_sign = 1;
for (i = 0; s[i]; i++)
{
if (s[i] == 45)
{
num_sign = -1 * num_sign;
}
if (s[i] >= 48 && s[i] <= 57)
number = number * 10 + (s[i] - 48);
else if (number > 0)
break;
}
number = number *num_sign;
return (number);
}
