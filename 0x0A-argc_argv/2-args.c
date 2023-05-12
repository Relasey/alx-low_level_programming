#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives, ending with a new line
 * @argc: Number of command line arguments
 * @argv: Name of Array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
		printf("%s\n", argv[m]);

	return (0);
}
