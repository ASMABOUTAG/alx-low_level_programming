#include "main.h"
/**
 * print_square - prints a square.
 * @size: the size of square.
*/
void print_square(int size)
{
int i, j;
i = 1;
if (size > 0)
{
while (i <= size)
{
for (j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar('\n');
i++;
}
}
else if (size <= 0)
_putchar('\n');
}

