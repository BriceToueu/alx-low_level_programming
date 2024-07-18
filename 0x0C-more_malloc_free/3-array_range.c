#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *array_range, i = 0, t = min;

	if (min > max)
		return (0);
	array_range = malloc((max - min + 1) * sizeof(int));

	if (!array_range)
		return (0);
	while (i <= max - min)
		array_range[i++] = t++;
	return (array_range);
}

