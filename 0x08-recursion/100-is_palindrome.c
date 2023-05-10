#include "main.h"
/**
 * _strlen - return length of string
 * @str: checker
 * Return: length of str
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}
/**
 * check_palindrome - checks to see if a string is a palindrome
 * @a: left hand index
 * @q: right hand index
 * @s: possible palindrome
 * Return: 1 if palindrome 0 if not
 */
int check_palindrome(int a, int q, char *s)
{
	if (a >= q)
		return (1);
	else if (s[a] != s[q])
		return (0);
	else
		return (check_palindrome(a + 1, q - 1, s));
}
/**
 * is_palindrome - states if a string is a palindrome
 * @s: checker
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
