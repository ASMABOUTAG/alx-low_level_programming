#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - figured up if the number is positive or negative
 * Return: success means 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n >= 0)
{
	printf(n, "%d is positive\n");
}
else
{
	printf(n, "%d is negative\n");
}
return (0);
}

