#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with
 * a specific char
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		ch[i] = c;
		i++;
	}

	return (ch);
}
