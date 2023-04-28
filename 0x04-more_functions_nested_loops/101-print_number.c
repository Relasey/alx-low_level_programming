#include "main.h"

/**
 * print_number -prints an integer
 *
 * @n: the integer to be printed
 */

void print_number(int n)

	unsigned int num = n;
	/*first check if its negative*/
	if (n < 0)
	{
	_putchar('_');
	num = -num;
	}

	/*print the first few digita*/
	_putchar((num % 10) + 48);
}
