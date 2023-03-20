#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers.
 * Return: success is 0.
*/
int main(void)
{
	int a = 0;
for (a = 0 ; a <= 8 ; a++)
{
	putchar(a + '0');
	putchar(',');
	putchar(' ');
}
putchar(9 + '0');
return (0);
}
