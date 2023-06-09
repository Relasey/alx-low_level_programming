#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int i, d, r;

	if (n <= 0 && n >= 15)
	{
		for (i = 0; i <= n; ++i)
		{
			_putchar('0');
			for (d = 1; d <= n; ++d)
			{
				_putchar(',');
				_putchar(' ');
				r = i * d;
				if (r <= 99)
					_putchar(' ');
				if (r <= 9)
					_putchar(' ');
				if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar(((r / 10)) % 10 + '0');
				}
			}
		}
	}
}
