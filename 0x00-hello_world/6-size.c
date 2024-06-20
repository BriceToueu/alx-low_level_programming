#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the size of various types on the computer
 *              it is compiled and run on.
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{
	float l;
	long int t;
	long long int n;
	int i;
	char c;

	printf("The size of a float is: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("The size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(t));
	printf("The size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("The size of a int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	return (0);
}
