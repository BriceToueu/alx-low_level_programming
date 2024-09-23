#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int a;

	a = 0;
	/*Delacring While*/
	while (a < n)
	{
		*(s + a) = b; /*add 1 position s*/
		a++;

	} /*END While*/

	return (s);
}
