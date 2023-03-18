#include <stdio.h>
/**
 * main - printsthe lowercase alphabet in reverse.
 * Return: success is 0, failure is one.
 */
int main(void)
{
char ch = 'z';
for (ch = 'z' ; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar('\n');

return (0);
}

