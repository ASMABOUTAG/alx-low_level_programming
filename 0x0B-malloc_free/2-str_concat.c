#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: second input
 * Return: pointer or NULL.
*/
char *str_concat(char *s1, char *s2)
{
int i, j;
char *s_concat;
i = 0;
j = 0;
if (s1 == NULL)
return (NULL);
if (s2 == NULL)
return (NULL);
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
s_concat = malloc(sizeof(char) * (i + j + 1));
if (s_concat == NULL)
return (NULL);
i = 0;
for (; s1[i] != '\0'; i++)
{
s_concat[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
{
s_concat[i] = s2[j];
i++;
}

s_concat[i] = '\0';
return (s_concat);
}

