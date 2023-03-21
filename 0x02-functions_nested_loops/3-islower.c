#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: the character to be cheked
 * Return: 0 fail, 1 success.
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}


