#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - returns the sum of a and b
 * @a: input (number)
 * @b: second input
 * Return: the sum of the two numbers
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub -  returns the difference of a and b
 *@a: input
 *@b: a second input
 *Return:  returns the difference of two numbers
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - returns the product of a and b.
 *@a: a number
 *@b: a seconde number
 *Return: The product of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 *op_div -  returns the result of the division of a by b.
 *@a: a number
 *@b: a second number
 *Return: The result of the division of the two numbers
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
 *op_mod - Returns the remainder of the division of a by b
 *@a: a number
 *@b: a second number
 *Return: remainder of the devision of the two numbers
*/
int op_mod(int a, int b)
{
return (a % b);
}
