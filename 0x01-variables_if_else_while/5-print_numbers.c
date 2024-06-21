#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10
 *              followed by a new line
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}

	printf("\n");

	return (0);
}
