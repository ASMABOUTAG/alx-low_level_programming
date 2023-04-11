#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: the size of argv
 * @argv: an array of size argc
 * Return: 0 success, 1 other conditions.
*/
int main(int argc, char *argv[])
{
int i;
int add = 0;

for (i = 1; i < argc; i++)
{
if (argc > 1)
{
add = add + atoi(argv[i]);
if (atoi(argv[i]) == 0 || atoi(argv[i]) < 0)
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", add);
return (0);
}
