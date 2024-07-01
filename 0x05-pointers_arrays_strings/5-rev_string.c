#include "main.h"
#include "_strlen.c"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: none
 */

void rev_string(char *s)
{
	int a;
	int b;
	char twi;

	a = _strlen(s);
	b = 0;
	while (b < (a / 2))
	{
		twi = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = twi;
		b++;
	}
}
