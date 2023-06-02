#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints length and the string
 * @h: Pointer
 * Return: Amount of node
**/

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	for (; h != 0; h = h->next)
	{
		if (h->str == 0)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
	}
	return (count);
}
