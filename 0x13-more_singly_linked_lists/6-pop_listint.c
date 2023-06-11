#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to remove head node
 * @head: double pointer
 *
 *Return: NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int k;

	if (*head == NULL || head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	k = start->n;
	free(start);
	return (k);
}
