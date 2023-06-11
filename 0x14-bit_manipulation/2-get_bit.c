#include "main.h"

/**
 * get_bit - the value of a bit at an index in a decimal number
 * @n: number
 * @index: index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
