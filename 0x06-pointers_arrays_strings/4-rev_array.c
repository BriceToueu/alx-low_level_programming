#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)

{
	int twi, ind;

	ind = n - 1;
	while (ind > n / 2)
	{
		twi = a[n - 1 - ind];
		a[n - 1 - ind] = a[ind];
		a[ind] = twi;
		ind--;
	}
}
