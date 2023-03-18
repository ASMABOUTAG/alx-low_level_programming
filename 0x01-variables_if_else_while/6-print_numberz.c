#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: success is 0, failure is one.
 */
int main(void)
{
	int num;
for (num = 0; num <= 9; num++)
{
	putchar(num + '0');
}
putchar('\n');

return (0);
}

