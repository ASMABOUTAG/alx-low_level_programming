#include "main.h"
/**
 * len - calculate the lenght of string
 * @s: pointer to a string.
 * Return: lenght or 0.
*/
int len(char *s)
{
if (*s != '\0')
return (len(s + 1) + 1);
else
return (0);
}
/**
 * palindrome - return if a string is palindrom or not.
 * @s: pointer to a string
 * @first: the higher variable.
 * @last: the last variable.
 * Return: 0 or 1
*/
int palindrome(char *s, int first, int last)
{
if (*s == '\0')
return (1);
if (first >= last)
return (1);
if (s[first] == s[last])
{
return (palindrome(*s, first + 1, last - 1));
}
return (0);
}
/**
 * is_palindrome - check a string if it is palindrome.
 * @s: pointer to a string.
 * Return: 0 or 1.
*/
int is_palindrome(char *s)
{
return (palindrome(s, 0, len(s) - 1));
}
