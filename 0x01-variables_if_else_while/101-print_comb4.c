#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all different possible combinations of three digits
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	/* Variables declarations */
	int numberOne = 0;
	int numberTwo = 1;
	int numberThree = 2;

	/* First while loop for the first number */
	while (numberOne < 9)
	{
		while(numberTwo < 9)
		{
			/* Third while loop for the three number */
			while (numberThree <= 9)
			{
				putchar(numberOne + '0');
				putchar(numberTwo + '0');
				putchar(numberThree + '0');
				
				/* if conditions on 8 and 9 */
				if (numberOne != 7 || numberTwo != 8 || numberThree != 9)
				{
					putchar(',');
					putchar(' ');
				}
				
				numberThree++;
			}
			
			numberTwo++;
			numberThree = numberTwo + 1;
		}

		numberOne++;
		numberTwo = numberOne + 1;
	}

	putchar('\n');

	return (0);
}
