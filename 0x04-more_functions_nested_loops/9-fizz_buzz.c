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
printf(" ");
}
else if (v % 5 == 0)
{
printf("Buzz");
printf(" ");
}
else if (v % 3 == 0)
{
printf("Fizz");
printf(" ");
}
else
{
printf("%d", v);
printf(" ");
}
}
printf("\n");
return (0);
}

