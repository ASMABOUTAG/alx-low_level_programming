#include <stdio.h>
/**
 * main - prints the alphabet in lowercase then uppercase.
 * Return: success is 0, failure is one.
 */
int main(void)
{
char chr = 'a';
char c = 'A';
for (chr = 'a'; chr <= 'z'; chr++)
{
putchar(chr);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
