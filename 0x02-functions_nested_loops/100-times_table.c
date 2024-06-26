#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)

{
	int number, multiplie, product;

	if (n >= 0 && n <= 15)
	
	{
		number = 0;

		while (number < n)

		{
			_putchar('0');

			multiplie = 1;

			while (multiplie <= n)

			{
				_putchar(',');
				_putchar(' ');

				product = number * multiplie;

				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');

				if (product >= 100)

				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10 + '0'));
				}

				else if (product <= 99 && product >= 10)

				{
					_putchar((product / 10) + '0');
				}

				_putchar((product % 10) + '0');

				multiplie++;
			}

			_putchar('\n');

			number++;
		}
	}
}
