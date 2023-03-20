#include <stdio.h>
/**
 * main - Write a program that prints all the numbers of base 16 in lowercase
 * Return: 0 success
*/
int main(void)
{
	int c = 0;
	char b = 'a';
for (c = 0 ; c <= 9 ; c++)
{
	putchar((c % 16) + '0');
}
for (b = 'a' ; b <= 'f' ; b++)
{
	putchar(b);
}
putchar('\n');
return (0);
}

