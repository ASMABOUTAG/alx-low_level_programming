#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @a: pointer to a char.
 * Return: the value of a.
*/
char *cap_string(char *a)
{
int i;
i = 0;
while (a[i])
{
while (!(a[i] >= 97 && a[i] <= 122))
{
i++;
if (a[i - 1] == ' ' ||
a[i - 1] == '\t' ||
a[i - 1] == '\n' ||
a[i - 1] == '!' ||
a[i - 1] == '?' ||
a[i - 1] == '.' ||
a[i - 1] == '"' ||
a[i - 1] == ',' ||
a[i - 1] == ';' ||
a[i - 1] == '(' ||
a[i - 1] == ')' ||
a[i - 1] == '{' ||
a[i - 1] == '}' ||
i == 0)
{
a[i] = a[i] - 32;
i++;
}
}
}
return (a);
}
