#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodes = 0;

	for (; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		nodes++;
	}

	return (nodes);
}
