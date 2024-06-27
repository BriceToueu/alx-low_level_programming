#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: print n number of _
 *
 * Return: none
 */

void print_line(int n)

{
	int l;

	if (n > 0)
	{
		l = 0;
		while (l < n)
		{
			_putchar('_');
			l++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
