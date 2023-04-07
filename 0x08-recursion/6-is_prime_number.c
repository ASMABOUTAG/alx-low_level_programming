#include "main.h"
/**
 * prime_prime - cherche for a prime number
 * @k: an integer.
 * @n: the number to check.
 * Return: 1 or 0.
*/
int prime_prime(int k, int n)
{
if (n % k == 0)
return (0);
else
return (1);
k++;
return (prime_prime(k, n));
}
/**
 * is_prime_number - cherche for a prime number
 * @n:  number that could be a prime number or not.
 * Return: return 1 or 0.
*/
int is_prime_number(int n)
{
if (n <= 0 || n == 1)
	return (0);
return (prime_prime(2, n));
}
