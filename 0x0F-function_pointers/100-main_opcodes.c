#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
(* a blank line
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
*Description: this program prints opcodes in hexa)?
* Return: 0
**/

int main(int argc, char *argv[])
{
	int m, k;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	k = atoi(argv[1]);
	if (k < 0)
	{
		printf("Error\n");
		exit(2);
	}
	m = (0);
	while (m < k)
	{
		printf("%02hhx", *((char *)main + m));
		if (m < k - 1)
			printf(" ");
		else
			printf("\n");
		m++;
	}
	return (0);
}
