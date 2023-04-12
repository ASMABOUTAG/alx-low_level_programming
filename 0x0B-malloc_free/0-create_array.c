#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars..
 * @size: size of an array
 * @c: char of the array .
 * Return: 0 success or NULL.
*/
char *create_array(unsigned int size, char c)
{
unsigned int j;
char *p = malloc(sizeof(char) * size);
if (size == 0)
	return (NULL);
if (p != NULL)
{
for (j = 0; j < size; j++)
{
	p[j] = c;
}
return (p);
}
else
return (NULL);
}
