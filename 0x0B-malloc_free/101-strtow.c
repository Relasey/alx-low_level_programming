#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* count_word - helper function that count the number of words in a string
* @s: string to evaluate
* Return: number of words
*/
int count_word(char *s)
{
	int index, b, y;

	index = 0;
	y = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			index = 0;
		else if (index == 0)
		{
			index = 1;
			y++;
		}
	}

	return (y);
}
/**
* **strtow - splits a string into words
* @str: string to split
* Return: pointer to an array of strings (Success)
* or NULL (Error)
*/
char **strtow(char *str)
{
	char **matrix, *tmp;
	int c, m = 0, stlen = 0, words, p = 0, start, end;

	while (*(str + stlen))
		stlen++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (c = 0; c <= stlen; c++)
	{
		if (str[c] == ' ' || str[c] == '\0')
		{
			if (p)
			{
				end = c;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[m] = tmp - p;
				m++;
				p = 0;
			}
		}
		else if (p++ == 0)
		start = c;
	}

	matrix[m] = NULL;

	return (matrix);
}
