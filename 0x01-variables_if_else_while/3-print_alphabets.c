#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then uppercase
 *              followed by a newline.
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	char c = 'a';

	/* While loop that prints lowercase letters */
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	/* While loop that prints uppercase letters */
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
