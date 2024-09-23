#include "main.h"

/**
 * _strlen - print length of string
 * @s: is the string
 * Return: 0
 */

int _strlen(char *s)

{
	int a;

	a = 0;
	while (s[a] != 0)
	{
		a++;
	}
	return (a);
}
