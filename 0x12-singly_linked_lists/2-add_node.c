#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - Length of the string
 * @s: String
 * Return: Returns the length
**/

int _strlen(const char *s)
{
	int p = 0;

	while (*(s + p) != '\0')
	p++;

	return (p);
}
/**
 * add_node - Prints length and the string
 * @head: Pointer
 * @str: s
 * Return: Returns node
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == 0)
		return (0);
	if (str == 0)
	{
		free(newNode);
		return (0);
	}
	newNode->len = _strlen(str);
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
