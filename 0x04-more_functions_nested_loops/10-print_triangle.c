#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: print size number of triangle
 */

void print_triangle(int size)

{
	int l;
	int j;
	int k;

	if (size > 0)
	{
		l = 1;
		while (l <= size)
		{
			j = size - l;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}

			k = 0;
			while (k < l)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
