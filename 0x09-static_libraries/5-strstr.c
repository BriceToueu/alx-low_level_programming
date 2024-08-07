#include "main.h"

/**
 * _strstr - finds first occurrence of the substring needle
 *			in the string haystack. The terminating null bytes (\0)
 *			are not compared
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return a pointer to the beginning of the located substring
 *			or NULL if the substring is not found.
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*While loop*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
