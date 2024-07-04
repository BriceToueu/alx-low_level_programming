#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return:
 *	returns zero if s1 == s2
 *	returns negative number if s1 < s2
 *	returns positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)

{
	int a = 0, sous = 0;

	while (1)
	{
		if (s1[a] == '\0' && s2[a] == '\0')
			break;
		else if (s1[a] == '\0')
		{
			sous = s2[a];
			break;
		}
		else if (s2[a] == '\0')
		{
			sous = s1[a];
			break;
		}
		else if (s1[a] != s2[a])
		{
			sous = s1[a] - s2[a];
			break;
		}
		else
			a++;
	}
	return (sous);
}
