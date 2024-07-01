#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to print
 * Return: none
 */

void print_rev(char *s)

{
	int a;

	a = _strlen(s);
	while (a > 0)
	{
		_putchar(s[a - 1]);
		a--;
	}

	_putchar(10);
}
