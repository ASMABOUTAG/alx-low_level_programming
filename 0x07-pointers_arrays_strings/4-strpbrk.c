#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: pointer to a char.
 * @accept: what to search.
 * Return: pointer if it works, NULL if not.
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] > '\0'; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
return (s + i);
else
return ("NULL");
}
}
return (0);
}
