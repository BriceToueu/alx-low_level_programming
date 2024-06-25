#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower case, followed by a new line.
 *
 * Description: This function uses the _putchar function to display each
 *              lower case letter of the alphabet, from 'a' to 'z'.
 *
 * Return: None (void).
 */

void print_alphabet(void)

{
	int alphabet = 'a';
	
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
