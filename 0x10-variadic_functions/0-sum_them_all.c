#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	register unsigned int a;
	int sum = 0;
	va_list arguments;

	va_start(arguments, n);
	a = 0;
	while (a < n)
	{
		sum += va_arg(arguments, int);
		a++;
	}
	va_end(arguments);
	return (sum);
}
