#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prints the numbers from 1 to 100, followed by a new line.
 *
 * Return: none
 */

int main(void)

{
	int l = 1;
	while (l <= 100)
	{
		if (l % 3 == 0 || l % 5 == 0)
		{
			if (l % 3 == 0)
			{
				printf("Fizz");
			}
			if (l % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", l);
		}
		if (l != 100)
		{
			printf(" ");
		}
		l++;
	}
	printf("\n");
	return (0);
}
