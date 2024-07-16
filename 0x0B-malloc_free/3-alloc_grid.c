#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **gridots;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	gridots = malloc(height * sizeof(int *));
	if (gridots == NULL)
	{
		free(gridots);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		gridots[a] = malloc(width * sizeof(int));
		if (gridots[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gridots[a]);
			free(gridots);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			gridots[a][b] = 0;
	return (gridots);
}
