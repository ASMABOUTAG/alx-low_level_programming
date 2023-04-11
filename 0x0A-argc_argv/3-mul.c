#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the result of the multiplication.
 * @argc: the size of array argv
 * @argv: array of size argc
 * Return: success is 0, Error is 1.
*/
int main(int argc, char *argv[])
{
int i;
int multi = 1;
if (argc == 1)
{
printf("Error\n");
return (1);
}
for (i = 0; i < argc; i++)
{
if (argc > 1)
{
multi = multi *atoi(argv[i]);
if (atoi(argv[i]) == 0)
{
multi = 0;
}
}
}
printf("%d\n", multi);
return (0);
}
