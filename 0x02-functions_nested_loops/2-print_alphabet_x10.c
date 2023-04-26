#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *followed by a new line
 */
void print_alphabet_x10(void)
{
	int alphabet = 97;

	while (alphabet < 123)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
