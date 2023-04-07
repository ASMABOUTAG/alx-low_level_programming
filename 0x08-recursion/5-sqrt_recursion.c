#include "main.h"
/**
 * _square_root - calcul the square then return the root.
 * @k: square root of number n if exist.
 * @n: number of square root k
 * Return: k or -1.
*/
int _square_root(int k, int n)
{
int square;
square = k * k;
if (square == n)
	return (k);
if (square > n)
	return (-1);
k++;
return (_square_root(k, n));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: to set.
 * Return: natural square root.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
return (_square_root(1, n));
}
