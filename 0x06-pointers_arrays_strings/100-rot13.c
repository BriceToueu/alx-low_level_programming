#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	int t, l;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	t = 0;
	while (*(s + t))
	{
		l = 0;
		while (l < 52)
		{
			if (a[l] == *(s + t))
			{
				*(s + t) = b[l];
				break;
			}
			l++;
		}
		t++;
	}
	return (s);
}
