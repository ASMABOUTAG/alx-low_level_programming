#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @src : pointer to a char.
 * Return: returnn the value of src.
*/
char *string_toupper(char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
if (src[i] >= 97 && src[i] <= 122)
{
src[i] = src[i] - 32;
}
i++;
}
return (src);
}


