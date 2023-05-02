#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char to checked
 * Return: length
 */

int _strlen(char *s)
{
	int a = 0; /* start the counter from 0 */

	for (; *s++;)
		a++;
	return (a);
}
