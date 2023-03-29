#include "main.h"
/**
 * rev_string -  reverses a string.
 *@s: pointer to a char.
*/
void rev_string(char *s)
{
int i, len;
i = 0;
while (*s)
{
s++;
i++;
}
s--;
for (len = i; len > 0; len--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
