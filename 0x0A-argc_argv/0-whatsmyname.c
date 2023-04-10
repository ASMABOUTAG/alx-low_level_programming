#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argc: the size of argv array
 * @argv:  an array of size argc
 * Return: success 0.
*/
int main(int argc, char *argv[])
{
int ind;
for (ind = 0; ind < argc; ind++)
{
if (ind == 0)
{
printf("%s\n", argv[ind]);
}
}
return (0);
}
