#include "main.h"

/**
 * flip_bits - number of bits to change
 * to get from one number to another
 * @n: first num
 * @m: second num
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, cunt = 0;
	unsigned long int rent;
	unsigned long int excl = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		rent = excl >> p;
		if (rent & 1)
			cunt++;
	}

	return (cunt);
}
