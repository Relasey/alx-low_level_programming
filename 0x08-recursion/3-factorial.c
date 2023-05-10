#include "main.h"
/**
 * factorial - compute the factorial of a given number.
 * @n: given number
 * Return: factorial number
 */
int factorial(int n)
{
	int f = 1;

	if (n < 0)
		return (-1);

	else if (!n)
		return (1);

	f = factorial (n - 1);

	return (f * n);
}
