#include <studio.h>
#include "main.h"

/**
*main - prints largest factor of 612852475143
*Return: 0 (success)
*/
int main(void)
{
	long a, b;
	long num = 612852475143;
	double shape = sroot(num);

	for (a = 1;  a <= shape; a++)
	{
		if (num % a == 0)
		{
			b = num /  a;
		}
	}
	printf(“ % ld”,  b);
	printf(“\n”);
	return (0);
}
