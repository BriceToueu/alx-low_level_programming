#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *					of integers
 * @a: array of chars
 *@size: number matrix
*Return: void
 */

void print_diagsums(int *a, int size)
{
	/*Declaring variables*/
	int b;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	b = 0;
	while (b < size) /*number repetitions*/
	{
		/*sums for diagsums*/
		sum1 = sum1 + *(a + b * size + b);
		sum2 = sum2 + *(a + b * size + size - b - 1);

		b++; /*add +1*/
	}

	printf("%i, %i\n", sum1, sum2);

}
