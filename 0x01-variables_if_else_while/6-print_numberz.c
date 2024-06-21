#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers in base 10.
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	int number = 0;

	while ( number < 10)
	{
		putchar(number + '0'); /* Prints the number as a character */
		number++;
	}

	putchar('\n'); /* new line */

	return (0);
}
