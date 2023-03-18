#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: success is 0, failure is one.
 */
int main(void)
{
	char chr = 'a';
for (chr = 'a'; chr <= 'z'; chr++)
{
	putchar(chr);
}
return (0);
}
