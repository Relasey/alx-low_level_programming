#include "main.h"

/**
 *  print_alphabets - print alphabets in lowercase
 *
 */

void print_alphabets(void)
{
	int alphabet = 97;

	while (alphabet < 123)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
