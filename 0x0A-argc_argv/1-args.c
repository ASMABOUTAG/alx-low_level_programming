#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: size of argc array
 * @argv: an array of size argc
 * Return: 0 is success.
*/
int main(int argc, char *argv[])
{
if (*argv)
printf("%d\n", argc - 1);
return (0);
}
