#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)

{
	int number = 0;
	int multiplie, product;

	while (number <= 9)
	{
		_putchar('0);

		multiplie = 1;

		while (multiplie <= 9)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multipie;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');

			multiplie++;
		}

		_putchar('\n');

		number++;
	}
}
