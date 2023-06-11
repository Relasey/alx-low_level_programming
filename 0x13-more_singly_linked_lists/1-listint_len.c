#include "lists.h"

/**
 * listint_len - Function that finds the number of elements in list
 * @h: Pointer
 * Return: elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
