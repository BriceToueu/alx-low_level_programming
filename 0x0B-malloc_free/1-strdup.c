#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * which contains a copy of the string given as a parameter.
 * @str: string.
 *
 * Return: pointer to the duplicated string. It returns NULL
 * if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	ch = (char *)malloc(sizeof(char) * (a + 1));

	if (ch == NULL)
		return (NULL);

	b = 0;
	while (b <= a)
	{
		ch[b] = str[b];
		b++;
	}
	return (ch);
}
