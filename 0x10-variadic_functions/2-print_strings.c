#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings
 * @...: yhe strings
 * Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list s_infos;
unsigned int j;
char *string;
j = 0;
va_start(s_infos, n);
for (; j < n; j++)
{
string = va_arg(s_infos, char *);
if (string == NULL)
printf("(nil)");
else
printf("%s", string);
if (j != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(s_infos);
}
