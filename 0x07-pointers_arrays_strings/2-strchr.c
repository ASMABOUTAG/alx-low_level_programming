#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to a char.
 * @c: char
 * Return: returns a char.
*/
char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i]; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (0);
}
