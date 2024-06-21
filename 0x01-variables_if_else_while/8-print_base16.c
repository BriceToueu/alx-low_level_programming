#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	char hexDigits[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(hexDigits[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
