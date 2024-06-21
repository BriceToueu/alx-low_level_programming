#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a random number to the variable n
 * 		each time it is executed
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	/* Initializing the random number generator */
	srand(time(0));

	/* Generates a random number between 0 and RAND_MAX */
	int n = rand() - RAND_MAX / 2;

	/* Retrieves the last digit of n */
	int lastDigit = n % 10;

	/* Prints the result */
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
