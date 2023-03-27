#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the first pointer.
 * @b: the second pointer.
*/
void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}
