#include "main.h"

/**
 * main - print alphabets in lowercase
 *
 */
void print_alphabet(void)
{
	int alphabet = 97;

	while (alphabet < 123)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
