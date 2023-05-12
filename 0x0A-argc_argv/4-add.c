#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int s, t, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (s = 1; s < argc; s++)
		{
			ptr = argv[s];
			length = strlen(ptr);

			t = 0;
			while  (t < length)
			{
				if (isdigit(*(ptr + t)) == 0)
				{
					printf("Error\n");
					return (1);
				}
				t++;
			}

			sum += atoi(argv[s]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
