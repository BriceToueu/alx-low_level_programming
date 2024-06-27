#include "main.h"
/**
 * print_numbers - prints numbers from 0-9
 *
 * description: using ASCII
 *
 * Return: none
 */

void print_numbers(void)

{
	int a;

	a = 48;
	while (a <= 57)
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
