#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int _strlen(char *ch);

/**
* argstostr - function that concatenates all the arguments of your program
* @ac: argument counter.
* @av: argument vector.
* Return: pointer p.
*/
char *argstostr(int ac, char **av)
{
	int m = 0, n = 0, j = 0;
	int q = 0;
	char *t;

	if (ac == 0 || av == NULL)
		return (0);
	for (m = 0; m < ac; m++)
	{
		n += _strlen(av[m]);
	}
	t = malloc(n + 1 + ac);
	if (t == NULL)
		return (0);
	for (m = 0; m < ac; m++)
	{
		for (q = 0; q < (_strlen(av[m])); q++)
		{
			t[j] = av[m][q];
			j++;
		}
		t[j] = '\n';
		j++;
	}
	t[j] = '\0';
	return (t);
}

/**
* _strlen - counts number of chars.
* @ch: string.
* Return: pointer i.
*/

int _strlen(char *ch)
{
	int m = 0;

	while (ch[m])
		m++;
	return (m);
}
