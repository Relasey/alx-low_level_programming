#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t
 * @head: pointer
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (*head == NULL || head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	prev = NULL;
	do {
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	} while (*head != NULL);
	*head = prev;
	return (*head);
}
