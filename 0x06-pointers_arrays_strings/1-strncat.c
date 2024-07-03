#include "main.h"

/**
 * _strncat - concatenates two strings
 *  @dest: string to be appended
 * @src: string to append
 * @n: no. of bytes from src to use
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0;
	int j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Add characters from src to dest */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add null at the end of dest */
	dest[i] = '\0';

	return (dest);
}
