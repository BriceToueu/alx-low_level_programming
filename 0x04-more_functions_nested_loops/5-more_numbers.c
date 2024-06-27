#include "main.h"

/**
 * more_numbers - print 0-14 10 times
 *
 * description - use ASCII
 *
 * Return: none
 */

void more_numbers(void)
{
	int a =0;
	int b;

	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			if (b >= 10 && b <= 14)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
