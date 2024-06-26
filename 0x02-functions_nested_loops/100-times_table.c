#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)

{
	if (n > 15 || n < 0)
	{
		return;
	}

	int number1 = 0;

	while (number1 <= n)
	{
		int number2 = 0;

		while (number2 <= n)
		{
			int product = number1 * number2;

			if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}

			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (number2 < n)
			{
				_putchar(',');
				_putchar(' ');
			}

			number2++;
		}

		_putchar('\n');

		number1++;
	}
}