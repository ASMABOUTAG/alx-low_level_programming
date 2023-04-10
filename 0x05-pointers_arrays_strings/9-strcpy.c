#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to the buffer pointer.
 * @dest: pointer to char.
 * @src: pointer to char.
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int indy;
indy = 0;
for (; src[indy] != '\0'; indy++)
{
dest[indy] = src[indy];
}
dest[indy + 1] = '\0';
return (dest);
}

