#include "main.h"

/**
 *_strchr - prints from the first occurrence of a char.
 *@s: source string
 *@c: tested char
 *
 *Return: new string.
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= ‘\0’; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (0);
}
