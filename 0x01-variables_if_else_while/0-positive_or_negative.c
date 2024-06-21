#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number and determines
 *              whether it is positive, negative or zero
 *
 * Return: 0 (sucess)
 */

int main(void)

{
	int n;

	srand(time(0)); /* Initializes the random number generator */
	                /* with a seed based on the current time */

	n = rand() - RAND_MAX / 2; /* Generates a random number between */
	                           /* -RAND_MAX/2 and RAND_MAX/2 */
	
	printf("%d", n);

	if (n > 0)
		printf("positive\n");
	else if (n==0)
		printf("it is zero\n");
	else
		printf("negative\n");

	return (0);
}
