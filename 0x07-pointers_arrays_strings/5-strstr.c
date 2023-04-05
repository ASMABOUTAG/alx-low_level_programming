#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: pointer.
 * @needle: pointer.
 * Return: 0 is NULL, pointer if it works.
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j]; j++)
{
if (haystack[i] ==  needle[j] && haystack[i + 1] ==  needle[j + 1])
{
return (haystack + i);
}
else if (haystack[i] !=  needle[j] && haystack[i + 1] ==  needle[j + 1])
break;
else if (haystack[i] !=  needle[j] && haystack[i + 1] !=  needle[j + 1])
break;
}
}
return (0);
}
