#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: pointer to a char.
 * @src: pointer to a char.
 * Return: a pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
++dest;
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
