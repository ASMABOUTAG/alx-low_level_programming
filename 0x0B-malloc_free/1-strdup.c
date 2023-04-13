#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string given as parameter.
 * Return: a pointer or NULL.
*/
char *_strdup(char *str)
{
int i, j;
char *new_str;
i = 0;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
	i++;
new_str = malloc(sizeof(char) * (i + 1));
if (new_str == NULL)
return (NULL);

for (j = 0; str[j]; j++)
{
new_str[j] = str[j];
}
return (new_str);
}
