#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: those parameters
 * Return: the sum or 0 if (n == 0)
*/
int sum_them_all(const unsigned int n, ...)
{
va_list p_infos;
unsigned int i, sum;
sum = 0;
i = 0;
va_start(p_infos, n);
for (; i < n; i++)
{
sum = sum + va_arg(p_infos, int);
}
va_end(p_infos);
return (sum);
}
