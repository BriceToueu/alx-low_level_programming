#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodes = 0;

	for (; current != NULL; current = current->next)
	{
		nodes++;
	}

	return (nodes);
}
