#include "main.h"

/**
 * print_diagonal - drawing a diagonal line on terminal
 * @n: the character to be used
 * Return: always 0(Success)
 */
void print_diagonal(int n)
{
	int e, r;

	if (n <= 0)
		_putchar('\n');
	for (e = 0; e < n; e++)
	{
		for (r = 0; r < e; r++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
