#include "main.h"

/**
 * _isalpha - Checks if a charater is alphabetic.
 * @c: the character to check.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)

{
	/* check if 'c' is within the ASCII range for lowercase */
	 /* letters ('a' to 'z') or uppercase letters ('A' to 'Z') */

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
