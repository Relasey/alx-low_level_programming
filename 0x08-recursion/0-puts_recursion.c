#include "main.h"
/**
 * _puts_recursion - print string
 * @s: input
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else
		_putchar('\n')
}
