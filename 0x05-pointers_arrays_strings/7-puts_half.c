#include "main.h"
#include "_strlen.c"

/**
 * puts_half - prints the second half of the string.
 * @str: the string
 * Return: none
 */

void puts_half(char *str)

{
	int a;
	int b = 0;

	if (_strlen(str) % 2 != 0)
	{
		b = b + 1;
	}

	a = (_strlen(str) + b) / 2;
	while (a < _strlen(str))
	{
		_putchar(str[a]);
		a++;
	}
	_putchar(10);
}
