#include <stdio.h>
#include <math.h>
#include "main.h"


/**
* print_number - prints an integer
* @n: the number
*/

void print_number(int n)

{
	int digit, temp, num_digits;

	if (n < 0)
	{
		_putchar('-'); /* Prints negative sign */
		n = -n; /* Converts n to positive */
	}

	/* Calculating the number of digits in n */
	temp = n;
	num_digits = 0;

	while (temp > 0)
	{
		temp /= 10;
		num_digits++;
	}

	/* Print the numbers one by one */
	while (num_digits > 0)
	{
		digit = n / 10;
		_putchar('0' + digit); /* Converts digit to character */
		n %= 10;
		num_digits--;
	}
}
