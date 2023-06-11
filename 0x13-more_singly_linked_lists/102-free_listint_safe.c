#include "lists.h"

/**
 * free_listint_safe - function to reallocate a
 * listint_t list, even if is in a loop.
 * @h: pointer
 * Return: size
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node = NULL;
	size_t counter = 0;

	if (h == NULL || *h == NULL)
		return (0);
	node = *h;

	do {
		counter++;
		node = (*h)->next;
		free(*h);
		if (node >= *h)
		{
			*h = NULL;
			return (counter);
		}
		*h = node;
	} while (node != NULL);

	return (counter);
}
