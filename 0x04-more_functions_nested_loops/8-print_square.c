#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: print number size of square
 *
 * Return: none
 */

void print_square(int size)

{
	int l;
	int j;

	if (size > 0)
	{
		l = 0;
		while (l < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
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
