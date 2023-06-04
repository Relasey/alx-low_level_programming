#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *current_node;

	for (; head != 0;)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
