#include <stdio.h>
/**
 * main - output lowercase alphabets except e and q
 * Return: success means 0
*/
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if ((ch != 'e') && (ch != 'q'))
{
putchar(ch);
}
}
putchar('\n');
return (0);
}

