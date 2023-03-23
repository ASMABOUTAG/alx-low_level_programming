#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
int i, x;
i = 0;
while (i < 10)
{
for (x = 0; x <= 14; x++)
{
if (x >= 10)
{
_putchar((x / 10) + '0');
}
_putchar((x % 10) + '0');
}
i++;
_putchar('\n');
}
}


