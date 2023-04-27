#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		int alphabet = 97;

		while (alphabet < 123)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		count++;
	}
}
