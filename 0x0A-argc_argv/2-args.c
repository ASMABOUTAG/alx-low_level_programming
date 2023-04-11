#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: the size of argv array
 * @argv: the array of size argc
 * Return: success is 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
