#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int p, cunt = 0;
	unsigned long int cut;

	for (p = 63; p >= 0; p--)
	{
		cut = n >> p;

		if (cut & 1)
		{
			_putchar('1');
			cunt++;
		}
		else if (cunt)
			_putchar('0');
	}
	if (!cunt)
		_putchar('0');
}
