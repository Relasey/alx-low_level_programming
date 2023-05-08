#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 * Return: new string.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int k, m;

	for (k = 0; *(s + k); k++)
	{
		for (m = 0; *(accept + m); m++)
		{
			if (*(s + k) == *(accept + m))
			{
				break;
			}
		}
		if (*(accept + m) != '\0')
		{
			return (s + k);
		}
	}
	return (0);
}
