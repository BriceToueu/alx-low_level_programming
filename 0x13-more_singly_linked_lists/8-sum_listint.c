#include "lists.h"

/**
 * sum_listint - Computes the sum of all the
 *               data (n) in a listint_t linked list.
 * @head: Pointer to the start of the listint_t list.
 *
 * Return: 0 if the list is empty,
 *         otherwise the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
