#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string where to search
 * @accept: char to seearch
 * Return: return length
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, k;
k = 0;
for (i = 0; s[i] > '\0'; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
k++;
break;
}
else if (accept[j + 1] == '\0')
return (k);
}
}
return (k);
}
