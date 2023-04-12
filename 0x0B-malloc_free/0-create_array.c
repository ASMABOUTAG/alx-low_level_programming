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
char *p = malloc(sizeof(c) * 10);
if (size == 0)
	return (NULL);
for (j = 0; j < size; j++)
{
	p[i] = c;
}
return (p);
}
