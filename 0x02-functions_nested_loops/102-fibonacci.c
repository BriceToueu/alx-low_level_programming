#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *        separeted by a comma followed by a space.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)

{
	int count = 0;
	unsigned long fib1 = 0, fib2 = 1, sum;

	while (count < 50)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count < 49)
			printf(", ");
		else
			printf("\n");

		count++;
	}

	return (0);
}
