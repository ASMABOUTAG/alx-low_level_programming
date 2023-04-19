#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on each element..
 * @array: array
 * @size: size of the array.
 * @action: is a pointer to the function to use.
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int index = 0;
if (array == NULL || action == NULL)
{
return;
}
for (; index < size ; index++)
{
action(array[index]);
}
}
