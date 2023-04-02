#include <stdio.h>
/**
 * main -  that prints all possible different combinations of two digits.
 * Return: 0 is a success
*/
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i < 8)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');

return (0);
}
