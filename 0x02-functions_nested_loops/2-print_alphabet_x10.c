#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 *                      followed by a new line.
 *
 * Return: None (void)
 */

void print_alphabet_x10(void)

{
	char alphabet = 'a'; /* Start of the alphabet */
	int count = 0; /* Counter for 10 iterations */

	while (count < 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet); /* Displays the letter */
			alphabet++; /* Go to next letter */
		}

		alphabet = 'a'; /* Resets the letter to the beginning of the alphabet */

		count++; /* Increment the counter */
	}

	_putchar('\n'); /* New line */
}
