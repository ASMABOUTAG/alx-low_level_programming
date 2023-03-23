#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n:  number of times the character _ should be print
*/
void print_line(int n)
{
int i;
i = 1;
if (n > 0)
{

while (i <= n)
{
_putchar(95);
i++;
}
_putchar('\n');
}
else if (n <= 0)
{
_putchar('\n');
}
}
