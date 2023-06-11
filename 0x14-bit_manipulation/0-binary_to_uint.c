#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int bin_num = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		bin_num = 2 * bin_num + (b[k] - '0');
	}

	return (bin_num);
}
