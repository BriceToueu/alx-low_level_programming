#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at a specific index
 *                        in a listint_t linked list.
 * @head: Pointer to the start of the listint_t list.
 * @index: The index of the node to retrieve, starting from 0.
 *
 * Return: NULL if the node does not exist,
 *         otherwise the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL && current_index < index)
	{
		head = head->next;
		current_index++;
	}

	return (head);
}
