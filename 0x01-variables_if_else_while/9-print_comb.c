#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers.
 * Return: success is 0.
*/
int main(void)
{
	int a = 0;
for (a = 0 ; a <= 9 ; a++)
{
	putchar(a + '0');
if (a <= 8)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
