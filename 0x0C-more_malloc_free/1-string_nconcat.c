#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2 to concatenate
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, b = 0, q = 0;
	char *k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	k = malloc(sizeof(char) * (len1 + n + 1));

	if (k == NULL)
		return (NULL);

	for (b = 0, q = 0; b < len1 + n; b++)
	{
		if (b < len1)
		{
			k[b] = s1[b];
		}
		else
		{
			k[b] = s2[q++];
		}
	}
	k[b] = '\0';
	return (k);
}
