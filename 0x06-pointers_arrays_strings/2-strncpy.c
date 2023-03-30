#include "main.h"
/**
 * _strncpy - Write a function that copies a string.
 * @dest: pointer to char.
 * @src: pointer to char.
 * @n: number of bytes.
 * Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (src[i] != '\0' && i < n)
{
dest[j] = src[i];
i++;
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
