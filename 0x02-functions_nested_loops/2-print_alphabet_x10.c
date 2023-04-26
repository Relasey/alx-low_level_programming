#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int alphabet = 0;

	while (alphabet < 10)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
