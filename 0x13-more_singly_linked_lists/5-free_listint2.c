#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer
 *
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == 0)
		return;
	do {
		next = (*head)->next;
		free(*head);
		*head = next;
	} while (*head != 0);
}
