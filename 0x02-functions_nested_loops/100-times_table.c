#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)

{
	int number1 = 0, number2, product;


	if (n >= 0 && n <= 15)
	{
		while (number1 <= n)
		{
			_putchar('0');

			number2 = 1;
			while (number2 <= n)
			{
				_putchar(',');
				_putchar(' ');

				product = number1 * number2;

				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');

				number2++;
			}
			_putchar('\n');
			
			number1++;
		}
	}
}
