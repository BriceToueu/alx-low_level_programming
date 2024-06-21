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
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0'); /* Prints the number as a character */

	putchar('\n'); /* new line */

	return (0);
}
