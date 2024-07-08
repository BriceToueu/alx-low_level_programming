#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 *				in the string accept
 * @s: C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: a pointer to the byte in s that matches one of the bytes in accept
 *			or NULL if no such byte is found
 **/

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s != '\0') /*Declaring WHILE*/
	{
		b = 0;
		while (accept[b] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[b])
			{
				return (s);
			}

			b++; /*add b+1*/
		}

		s++; /*add s+1*/
	}
	return (0);

}
