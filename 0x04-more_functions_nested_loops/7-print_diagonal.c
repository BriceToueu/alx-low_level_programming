#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: The n number of diagonals
 */

void print_diagonal(int n)

{
	int l;
	int j;

	if (n > 0)
	{
		l = 0;
		while (l < n)
		{
			j = 0;
			while (j < l)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
