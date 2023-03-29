#include "main.h"
/**
 * puts2 -  prints every other character of a string, starting...
 *@str: pointer to char.
*/
void puts2(char *str)
{
int count = 0;
while (*str != '\0')
{
if (count % 2 == 0)
{
_putchar(*str);
}
str++;
count++;
}
_putchar('\n');
}
