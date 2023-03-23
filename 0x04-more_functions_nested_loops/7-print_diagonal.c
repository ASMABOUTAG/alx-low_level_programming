#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n : the number of time we repeat the digonal.
*/
void print_diagonal(int n)
{
int i, j;
i = 1;
if (n > 0)
{
while (n >= i)
{
for (j = 1; j < i; j++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
i++;
}
}
else if (n <= 0)
{
_putchar('\n');
}
}
