#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of an operation
 * @argc: size of argv
 * @argv: array of pointers of  size argc
 * Return: 0.
*/
int main(int argc, char *argv[])
{
char *p;
int n, m;
if (argc != 4)
{
printf("Somthing went wrong !\n");
exit(98);
}
n =  atoi(argv[1]);
p = argv[2];
m = atoi(argv[3]);
if (p[1] != '\0' || get_op_func(p) == NULL)
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(p)(n, m));
return (0);
}
