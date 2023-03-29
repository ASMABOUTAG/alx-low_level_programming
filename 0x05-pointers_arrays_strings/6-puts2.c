#include "main.h"
/**
 * puts2 -  prints every other character of a string, starting...
 *@str: pointer to char.
*/
void puts2(char *str)
{
int count = 0;
while (*s != '\0')
{
if (count % 2 == 0)
{
_putchar(*s);
}
s++;
count++;
}
_putchar('\n');
}
