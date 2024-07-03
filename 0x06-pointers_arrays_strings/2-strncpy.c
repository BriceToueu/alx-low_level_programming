#include "main.h"

/**
 * _strncat - copies a string
 * @dest: string to be copied to
 * @src: string to copy
 * @n: no. of bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i = 0;

	/* Copies characters from src to dest as long as i<n and src[i] is not '\0' */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/* Fills the rest of dest with null characters ('\0') until n is reached */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
