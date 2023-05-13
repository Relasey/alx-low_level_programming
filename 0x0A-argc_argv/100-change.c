#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * make_change - prints the minimum number of coins to make change
 * @n: value
 * Return: c
 */
int make_change(int n)
{
	int c, q, d, i, t, p;

	c = 0;
	q = 0;
	d = 0;
	i = 0;
	t = 0;
	p = 0;

	while (n > 0)
	{
		if (n >= 25)
		{
			n -= 25;
			q += 1;
		}
		else if (n >= 10)
		{
			n -= 10;
			d += 1;
		}
		else if (n >= 5)
		{
			n -= 5;
			i += 1;
		}
		else if (n >= 2)
		{
			n -= 2;
			t += 1;
		}
		else
		{
			n -= 1;
			p += 1;
		}
	}
	c = q + d + i + t + p;

	return (c);
}

/**
 * main - prints minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		c = make_change(atoi(argv[1]));
		printf("%d\n", c);
	}
	return (0);
}
