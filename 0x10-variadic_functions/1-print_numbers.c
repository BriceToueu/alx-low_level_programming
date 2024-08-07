#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;

	va_start(valist, n);

	a = 0;
	while (a < n)
	{
		printf("%d", va_arg(valist, int));
		if (separator && a < n - 1)
			printf("%s", separator);
		a++;
	}

	printf("\n");
	va_end(valist);
}
