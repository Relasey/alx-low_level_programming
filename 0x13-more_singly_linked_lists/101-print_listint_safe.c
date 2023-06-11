#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function that returns all
 * the values of a listint_t list.
 * @head: pointer
 * Return: a size_t
 **/

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;

	if (head == NULL)
		return (0);

	do {
		counter++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, (head->next)->n);
			break;
		}
		head = head->next;
	} while (head != NULL);

	return (counter);
}
