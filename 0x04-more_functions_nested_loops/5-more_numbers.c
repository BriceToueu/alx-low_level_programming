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
	int a;
	int b;

	while (a <= 9)
	{
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
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
