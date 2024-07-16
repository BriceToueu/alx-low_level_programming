#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return the number of bytes in the initial segment of s
 *			which consist only of bytes from accept
 **/

unsigned int _strspn(char *s, char *accept)

{
	int a, b;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	a = 0;
	while (str1[a] != '\0') /*Declaring While *s */
	{
		b = 0;
		while (str2[b] != '\0') /*Declaring While *accept*/
		{
			if (str2[b] == str1[a]) /*Evaluate condition*/
			{
				count++; /*count number*/
				break;
			}

			b++;    /*add b+1*/
		}

		if (s[a] != accept[b]) /*If aren't equals*/
		{
			break;
		}

		a++; /*add a+1*/
	}

	return (count); /*return the value of count*/
}
