#include "stdio.h"
/**
*print_array - prints n element of an array of integers
*@a: the int type of array pointers
*@n: the type of integer
*Description: Numbers must be separated by comma and space.
* Numbers should be displayed in the same order they are stored in array.
* You can only use _putchar to print.
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
