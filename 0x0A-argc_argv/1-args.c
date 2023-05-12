#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed
 * @argc: Number of command line arguments
 * @argv: Array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k = 0;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		while (*argv)
		{
			k++;
			argv++;
		}

		printf("%d\n", k - 1);
	}

	return (0);
}
