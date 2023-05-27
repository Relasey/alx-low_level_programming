#include "3-calc.h"

/**
 * op_add - addition operator
 * @m: first number
 * @n: second number
 * Return: sum of 2 numbers
 */
int op_add(int m, int n)
{
	return (m + n);
}

/**
 * op_sub - subtraction operator
 * @m: first number
 * @n: second number
 * Return: difference of 2 numbers
 */
int op_sub(int m, int n)
{
	return (m - n);
}

/**
 * op_mul - product of 2 numbers
 * @m: first number
 * @n: second number
 * Return: product of the numbers
 */
int op_mul(int m, int n)
{
	return (m * n);
}

/**
 * op_div - division of 2 numbers
 * @m: first
 * @n: second
 * Return: result of the division of the numbers
 */
int op_div(int m, int n)
{
	return (m / n);
}

/**
 * op_mod - get remainder of the division of 2 numbers
 * @m: first
 * @n: second
 * Return: remainder of division of the numbers
 */
int op_mod(int m, int n)
{
	return (m % n);
}
