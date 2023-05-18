#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create array of integers
 * @min: min
 * @max: max
 *
 * Return: pointer to create array
 */
int *array_range(int min, int max)
{
	int *eg;
	int i, index;

	index = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	eg = malloc(sizeof(int) * index);
	if (eg == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		eg [i] = min++;
	}
	return (eg);
}
