#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a list_t linked list.
 * @head: Double pointer to the list.
 * @str: New string to add to node.
 * Return: Address of new element or NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!str)
		return (NULL);

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
