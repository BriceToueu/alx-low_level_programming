#include "main.h"

/**
 * char *_strcpy - copy str to src
 * @dest: string destination
 * @src: src directory
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
