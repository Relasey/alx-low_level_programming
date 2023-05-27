#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - Prints the result of simple operations
* @argc: The number of arguments
* @argv: An array of pointers
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == 0 || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
