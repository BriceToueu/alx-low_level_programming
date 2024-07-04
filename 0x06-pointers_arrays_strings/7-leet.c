#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int t, l;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	t = 0;
	while (*(s + t))
	{
		l = 0;
		while (l <= 9)
		{
			if (a[l] == *(s + t))
				*(s + t) = b[l];
			l++;
		}
		t++;
	}
	return (s);
}
