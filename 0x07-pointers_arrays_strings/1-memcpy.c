#include "main.h"
/**
 * _memcpy - copies memory area..
 * @dest: memory area.
 * @src: other memory area.
 * @n: number of bytes to copy.
 * Return: Returns a pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);
}
