#include <stdio.h>

/**
 * main - finds and prints first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int count = 0;
	unsigned long fib1 = 1, fib2 = 2, sum;
	unsigned long next;

	printf("%lu, %lu", fib1, fib2);

	while (count < 96)
	{
		next = fib1 + fib2;
		printf(", %lu", next);

		fib1 = fib2;
		fib2 = next;
		count++;
	}

	printf("\n");
	return (0);
}
