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
unsigned int i, j, size_1, size_2;
char *string;
j = i = 0;
size_1 = size_2 = 0;
while (s1 && s1[size_1])
	size_1++;
while (s2 && s2[size_2])
	size_2++;
if (n > size_2)
{
string = malloc(sizeof(char) * (size_1 + n + 1));
}
else
string = malloc(sizeof(char) * (size_2 + size_1 + 1));
if (!string)
return (NULL);
while (i < size_1)
{
string[i] = s1[i];
i++;
}
while (n < size_2 && i < (size_1 + n))
string[i++] = s2[j++];
while (n >= size_2 && i < (size_1 + size_2))
string[i++] = s2[j++];
string[i] = '\0';
return (string);
}
