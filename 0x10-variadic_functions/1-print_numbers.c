#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of integers
 * @...: numbers to be print
 * Return: Nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list n_infos;
unsigned int j;
j = 0;
va_start(n_infos, n);
for (; j < n; j++)
{
printf("%d", va_arg(n_infos, int));
if (j != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(n_infos);
}
