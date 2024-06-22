#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}

		number++;
	}

	putchar('\n');

	return (0);
}
