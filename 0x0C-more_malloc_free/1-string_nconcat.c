#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer; /*Declare a pointer to hold the concatenated string*/
	unsigned int size1 = 0, size2 = 0, a; /* Declare variables */

	if (s1 == NULL) /* Check if s1 is NULL */
		s1 = ""; /* If s1 is NULL, set it to an empty string */

	if (s2 == NULL) /* Check if s2 is NULL */
		s2 = ""; /* If s2 is NULL, set it to an empty string */

	while (s1[size1] != '\0') /* Calculate the length of s1 */
	{
		size1++; /* Increment size1 until the null terminator is reached */
	}

	while (s2[size2] != '\0') /* Calculate the length of s2 */
	{
		size2++; /* Increment size2 until the null terminator is reached */
	}

	if (n > size2) /* Check if n is greater than the length of s2 */
		n = size2; /* If n is greater, set n to the length of s2 */

	/* Allocate memory for the concatenated string */
	pointer = malloc((size1 + n + 1) * sizeof(char));

	if (pointer == NULL) /* Check if memory allocation failed */
		return (0); /* If allocation failed, return 0 (or NULL) */

	a = 0; /* Initialize loop counter */
	while (a < size1) /* Copy characters from s1 to pointer */
	{
		pointer[a] = s1[a]; /* Copy each character from s1 to pointer */
		a++; /* Increment loop counter */
	}

	while (a < (size1 + n)) /*Copy the first n characters from s2 to pointer*/
	{
		pointer[a] = s2[a - size1]; /*Copy each character from s2 to pointer*/
		a++; /* Increment loop counter */
	}

	/* Add the null terminator to the end of the concatenated string */
	pointer[a] = '\0';

	return (pointer); /* Return the pointer to the concatenated string */
}
