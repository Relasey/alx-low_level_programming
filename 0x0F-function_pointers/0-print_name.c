#include "function_pointers.h"

/**
 * print_name - function that  prints a name
 * @name: string
 * @f: char
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
