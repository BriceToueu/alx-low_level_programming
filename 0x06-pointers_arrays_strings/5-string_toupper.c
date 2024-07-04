#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to be changed
 *
 * Return: address tp th string
 */

char *string_toupper(char *str)

{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
		a++;
	}
	return (str);
}
