#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: pointer.
 * @needle: pointer.
 * Return: 0 is NULL, pointer if it works.
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
	char *f = haystack;
	char *s = needle;
while (*f == *s && *s != '\0')
{
f++;
s++;
}
if (*s == '\0')
return (haystack);
}
return (0);
}
