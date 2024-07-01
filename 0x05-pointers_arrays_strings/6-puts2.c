#include "main.h"
#include "_strlen.c"

/**
 * puts2 - prints every other character of a string, starting with the first
 *         character, followed by a new line.
 * @str: string
 * Return: none
 */

void puts2(char *str)

{
	int a;

	a = 0;
	while (str[a] != 0)
	{
		if ((a % 2) == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}

	_putchar(10);
}
