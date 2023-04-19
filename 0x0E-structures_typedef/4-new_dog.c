#include "dog.h"
#include <stdlib.h>
/**
 * _len - gives the length of a string.
 * @str: the string.
 * Return: the length.
*/
int _len(char *str)
{
int index;
index = 0;
while (str[index] != '\0')
{
	index++;
}
return (index);
}
/**
 * copy_str - copies the string to a buffer.
 * @st: string to copy
 * @here: where we copy the string (the buffer).
 * Return: a ponter.
*/
char *copy_str(char *st, char *here)
{
int i, j;
j = 0;
while (st[j] != '\0')
{
j++;
}
for (i = 0; i < j; i++)
{
here[i] = st[i];
}
here[i] = '\0';
return (here);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL if fail and pointer if success.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int na_length, ow_length;
dog_t *dogy;
na_length = _len(name);
ow_length = _len(owner);
dogy = malloc(sizeof(dog_t));
if (dogy == NULL)
return (NULL);
dogy->name = malloc(sizeof(char) * (na_length + 1));
if (dogy->name == NULL)
{
free(dogy);
return (NULL);
}
dogy->owner = malloc(sizeof(char) * (ow_length + 1));
if (dogy->owner == NULL)
{
free(dogy);
free((*dogy).name);
return (NULL);
}
dogy->age = age;
copy_str(dogy->name, name);
copy_str(dogy->owner, owner);
return (dogy);
}
