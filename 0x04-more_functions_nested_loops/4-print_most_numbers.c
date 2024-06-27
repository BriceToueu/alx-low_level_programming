#include "main.h"
/**
 * print_most_numbers - print nums 0-9 except 2,4
 *
 * description: using ASCII
 *
 * Return: none
 */

void print_most_numbers(void)

{
	int a;

	a = 48;
	while (a <= 57)
	{
		if ((a != 50) && (a != 52))
		{
			_putchar(a);
			a++;
		}
	}
	_putchar(10);
}
