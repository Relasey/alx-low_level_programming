#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
*
* @size: input size.
*
* @c: char
*
* Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int r;
	char *btr;

	btr = malloc(sizeof(char) * size);
	if (size == 0 || btr == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < size; r++)
	{
		btr[r] = c;
	}
	return (btr);
}
