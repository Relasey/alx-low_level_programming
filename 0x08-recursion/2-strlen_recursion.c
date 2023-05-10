#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string returned
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s == 0)
		return (0);
	_strlen_recursion(s + 1) = length;
	return (length + 1);
}
