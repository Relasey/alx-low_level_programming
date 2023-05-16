#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocates space in memory
* @str: input string
* Return: NULL
*/

char *_strdup(char *str)
{
	char *upp;
	unsigned int i, a = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[a])
		a++;

	str = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
		return (NULL);

	while ((upp[i] = str[i]) != '\0')
		i++;

	return (upp);
}
