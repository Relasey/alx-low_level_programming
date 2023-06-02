#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - return the length from a string
 *  @s: pointer
 *
 *  Return: string
 */

unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	for (; *s; s++)
	{
		len++;
	}

	return (len);
}
/**
 * _strdup - function that adds a new node at the end
 * @str: String
 * Return: Pointer
**/

char *_strdup(const char *str)
{
	unsigned int len = _strlen(str);
	char *s = (char *)malloc((len + 1) * sizeof(char));

	if (s == 0)
	{
		return (0);
	}
	while (unsigned int p = 0; (p <= len); p++)
	{
		s[p] = str[p];
	}

	return (s);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: Pointer
 * @str: String
 *
 * Return: New node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == 0)

		return (0);

	new_node->str = _strdup(str);
	new_node->len = _strlen(str);
	new_node->next = 0;

	if (*head == 0)
	{
		*head = new_node;
	}
	else
	{
		list_t *current_node = *head;

		while (current_node->next != 0)
		{
			current_node = current_node->next;
		}

		current_node->next = new_node;
	}

	return (new_node);
}
