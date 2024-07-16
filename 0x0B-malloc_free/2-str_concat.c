#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	unsigned int a, b, k, terminal;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}

	ch = malloc(sizeof(char) * (a + b + 1));

	if (ch == NULL)
	{
		free(ch);
		return (NULL);
	}

	k = 0;
	while (k < a)
	{
		ch[k] = s1[k];
		k++;
	}

	b = 0;
	terminal = b;
	while (b <= terminal)
	{
		ch[k] = s2[b];
		k++;
		b++;
	}
	return (ch);
}
