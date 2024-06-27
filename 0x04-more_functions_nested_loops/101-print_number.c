#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer n
 *
 * Return: none
 */
void print_number(int n)
{
	int i;
	int j;
	int a;
	unsigned int l;
	unsigned int t;

	j = 1;
	a = 0;
	l = n;
	t = n;
	if (n == 0)
		_putchar(48);
	if (n < 0)
	{
		_putchar(45);
		n = n + 1;
		n = -n;
		t = n;
		l = n;
		l = l + 1;
		t = t + 1;
	}
	while (l != 0)
	{
		l = (l / 10);
		a++;
	}
	for (i = 1; i < a; i++)
	{
		j = (j * 10);
	}
	for (i = 0; i < a; i++)
	{
		_putchar((t / j) + 48);
		t = (t % j);
		j = (j / 10);
	}
}
