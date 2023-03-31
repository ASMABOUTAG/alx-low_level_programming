#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers.
 * @n: the number of elements to swap.
*/
void reverse_array(int *a, int n)
{
int i, swap;
i = 0;
while (i < n)
{
n--;
swap = a[i];
a[i] = a[n];
a[n] = swap;
i++;
}
}
