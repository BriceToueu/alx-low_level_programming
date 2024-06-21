#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints letters from 'a' to 'z', excluding 'q' and 'e'
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);

		c++;
	}

	putchar('\n');

	return (0);
}
