#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	a = 0;
	while (a < n)
	{
		sum += va_arg(valist, int);
		a++;
	}
	va_end(valist);

	return (sum);
}
