#include <stdio.h>
#include "lists.h"

/**
 * list_len - Prints length and the string
 * @h: Pointer
 * Return: Returns node
**/
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	for (; h != 0; h = h->next)
	{
		count++;
	}
	return (count);
}
