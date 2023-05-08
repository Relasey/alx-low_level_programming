#include "main.h"
/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int e, f;

	for (f = 0; *(s + f); f++)
	{
		for (e = 0; *(accept + e); e++)
		{
			if (*(s + f) == *(accept + e))
				break;
		}
	if (*(accept + e) == '\0')
		break;
	}
	return (f);
}
