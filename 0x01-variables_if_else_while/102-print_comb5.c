#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all posssible combinations of two two-digits numbers.
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	/* Variables declarations */
	int numberOne = 0;
	int numberTwo = 1;

	/* First while loop for the first number */
	while (numberOne <= 9)
	{

		/* Second while loop for the second number */
		while (numberTwo <= 9)
		{
			putchar((numberOne / 10) + '0');
			putchar((numberOne % 10) + '0');
			putchar(' ');
			putchar((numberTwo / 10) + '0');
			putchar((numberTwo % 10) + '0');

			/* if condition for the two numbers */
			if (numberOne != 9 && numberTwo != 8)
				continue;

			putchar(',');
			putchar(' ');

			numberTwo++;
		}

		numberOne++;
		numberTwo = numberOne + 1;
	}

	putchar('\n');

	return (0);
}

