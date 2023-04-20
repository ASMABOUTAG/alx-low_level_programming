#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - searches for an integer..
 *@array: array
 *@size:  number of elements in the array.
 *@cmp: pointer to the function to be used.
 * Return: 0  is a success.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int a = 0;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (; a < size; a++)
{
if (cmp(array[a]))
{
return (a);
}
}
return (-1);
}
