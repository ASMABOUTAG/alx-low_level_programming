#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: pointer to a char.
*/
void print_rev(char *s)
{
int i, len;
i = 0;
while (*s != '\0')
{
s++;
i++;
}
s--;
for (len = i; len >= 0; len--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
