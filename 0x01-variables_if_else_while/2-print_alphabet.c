#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Uses the putchar function to display characters from 'a' to 'z'
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	/* Variables declaration and assignement */
	char c;

	while ((c == 'a') <= 'z')
	{
		putchar(c);

		c++;
	}

	putchar('\n');

	return (0);
}
