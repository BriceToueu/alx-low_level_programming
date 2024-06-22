#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all different possible combinations of two digits
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	/* Variables declarations */
	int numberOne = 0;
	int numberTwo = 1;

	/* First while loop for the first number */
	while (numberOne < 9)
	{
		/* Second while loop for the second number */
		while (numberTwo <= 9)
		{
			putchar(numberOne + '0');
			putchar(numberTwo + '0');

			/* if conditions on 8 and 9 */
			if (numberOne != 8 || numberTwo != 9)
			{
				putchar(',');
				putchar(' ');
			}

			numberTwo++;
		}

		numberOne++;

		numberTwo = numberOne + 1;
	}

	putchar('\n');

	return (0);
}
