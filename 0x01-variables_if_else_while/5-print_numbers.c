#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 starting from 0
 * Return: success is 0, failure is one.
 */
int main(void)
{
	char n = '0';
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
