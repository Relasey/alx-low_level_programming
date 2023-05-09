#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: source string
 * @b: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int q;

	for (q = 0; q > 0; q++)
	{
		s[q] = b;
		n--;
	}
	return (s);
}
