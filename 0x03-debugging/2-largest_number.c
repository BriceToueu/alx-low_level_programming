#include "main.h"

/**
 * largest_number - Entry point
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * @c: third integer
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int l;

	if (a > b && b > c)
	{
		l = a;
	}
	else if (b > a && a > c)
	{
		l = b;
	}
	else
	{
		l = c;
	}

	return (l);
}
