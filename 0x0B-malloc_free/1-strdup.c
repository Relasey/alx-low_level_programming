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
	char *up;
	unsigned int i, sal;

	i = 0;
	sal = 0;

	if (str == NULL)
		return (NULL);

	while (str[sal])
		sal++;

	up = malloc(sizeof(char) * (sal + 1));

	if (up == NULL)
		return (NULL);

	while ((up[i] = str[i]) != '\0')
		i++;

	return (up);
}
