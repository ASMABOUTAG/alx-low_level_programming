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
int value __attribute__ ((unused));
char *suiv;

for (i = 1; i < argc; i++)
{
if (argc > 1)
{
value = strtol(argv[i], &suiv, 10);

if (*suiv != '\0' || suiv == argv[i])
{
printf("Error\n");
return (1);
}
else
{
add = add + atoi(argv[i]);
}
}
}
printf("%d\n", add);
return (0);
}
