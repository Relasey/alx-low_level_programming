#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - function that concatenates two strings.
*
* @s1: first string.
*
* @s2: second string
*
* Return: returns NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *abc;
	unsigned int m = 0, n = 0, strlen1 = 0, strlen2 = 0;

	while (s1 && s1[strlen1])
		strlen1++;
	while (s2 && s2[strlen2])
		strlen2++;

	abc = malloc(sizeof(char) * (strlen1 + strlen2 + 1));

	if (abc == NULL)
		return (NULL);

	m = 0;
	n = 0;

	if (s1)
	{
		while (m < strlen1)
		{
			abc[m] = s1[m];
			m++;
		}
	}

	if (s2)
	{
		while (m < (strlen1 + strlen2))
		{
			abc[m] = s2[n];
			m++;
			n++;
		}
	}
	abc[m] = '\0';

	return (abc);
}
