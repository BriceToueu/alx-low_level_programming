#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer number
 * @b: second integer number
 * Return: none
 */

void swap_int(int *a, int *b)

{
	int twi = *a;
	*a = *b;
	*b = twi;
}
