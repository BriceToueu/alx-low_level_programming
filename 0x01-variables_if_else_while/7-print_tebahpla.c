#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reserve, followed by a new line.
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
