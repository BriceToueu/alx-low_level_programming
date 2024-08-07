#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list of type list_t
 * @head: pointer to the start of the list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
