#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100 with conditions
 * Return: 0 is success.
*/
int main(void)
{
int v;
for (v = 1; v <= 100; v++)
{
if ((v % 3 == 0) && (v % 5 == 0))
{
printf("FizzBuzz");
}
else if (v % 5 == 0)
{
printf("Buzz");
}
else if (v % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", v);
}
if (v != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}

