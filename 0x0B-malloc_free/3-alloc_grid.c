#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* **alloc_grid - returns a two dimensional array of ints.
*
* @width: width of the matrix.
*
* @height: height of the matrix
*
* Return: pointer to the created matrix (Success)
* or NULL (Error)
*/

int **alloc_grid(int width, int height)
{
	int **puts;
	int s, t;

	if (height <= 0 || width <= 0)
		return (NULL);

	puts = (int **) malloc(sizeof(int *) * height);

	if (puts == NULL)
		return (NULL);

	for (s = 0; s < height; s++)
	{
		puts[s] = (int *) malloc(sizeof(int) * width);
		if (puts[s] == NULL)
		{
			free(puts);
			for (t = 0; t <= s; t++)
				free(puts[t]);
			return (NULL);
		}
	}

	for (s = 0; s < height; s++)
	{
		for (t = 0; t < width; t++)
		{
			puts[s][t] = 0;
		}
	}
	return (puts);
}
