#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers, followed by new line
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int b, r;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		r = 1;

		for (b = 1; b < 3; b++)
			r *= atoi(argv[b]);

		printf("%d\n", r);
	}

	return (0);
}
