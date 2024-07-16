#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of our program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *ch;
	int a, b, c, l;

	if (ac == 0)
		return (NULL);
	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);
		for (c = 0; av[b][c] != '\0'; c++)
			a++;
		a++;
	}
	ch = malloc((a + 1) * sizeof(char));
	if (ch == NULL)
	{
		free(ch);
		return (NULL);
	}
	for (b = c = l = 0; l < a; c++, l++)
	{
		if (av[b][c] == '\0')
		{
			ch[l] = '\n';
			b++;
			l++;
			c = 0;
		}
		if (l < a - 1)
			ch[l] = av[b][c];
	}
	ch[l] = '\0';
	return (ch);
}
