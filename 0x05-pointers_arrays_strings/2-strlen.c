#include "main.h"
/**
 * _strlen -  returns the length of a string
 * @s : pointer to a char.
 * Return: the length of string.
*/
int _strlen(char *s)
{
int count;
count = 0;
while (s != "\0")
{
count = count + 1;
s++;
}
return (count);

