#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98, followed by a new line
 * @n: The number to begin counting at.
 */

void print_to_98(int n)

{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n < 98)
		{
			n++;
		}

		else
		{
			n--;
		}
	}

	printf("98\n");
}
