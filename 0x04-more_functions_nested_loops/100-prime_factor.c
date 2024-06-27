#include <stdio.h>

/**
 * main - Entry point
 *
 * description: finds and prints the largest prime factor of the number
 *              612852475143, followed by a new line.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)

{
	unsigned int i;
	unsigned long l;

	i = 2;
	l = 612852475143;
	while (i != l)
	{
		if ((l % i) == 0)
		{
			l = l / i;
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", l);
	return (0);
}
