#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: input (string)
 * @s2:input (string)
 * @n: bytes number
 * Return: pointer.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, size1, size2;
char *string;
j = 0;
i = 0;
size1 = 0;
size2 = 0;
while (s1 && s1[size1])
	size1++;
while (s2 && s2[size2])
	size2++;
if (n > size2)
{
string = malloc(sizeof(char) * (size1 + n + 1));
}
else
string = malloc(sizeof(char) * (size2 + size1 + 1));
if (!string)
return (NULL);
while (i < size1)
{
string[i] = s1[i];
i++;
}
while (n < size2 && i < (size1 + n))
string[i++] = s2[j++];
while (n >= size2 && i < (size1 + size2))
string[i++] = s2[j++];
string[i] = '\0';
return (string);
}
