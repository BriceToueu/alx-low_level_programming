#include "main.h"
/**
 *_memcpy -   copies n bytes from memory areas src to memory areas dest
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int a;

	a = 0;
	while (a < n)  /*Delacring While*/
	{
		*(dest + a) = *(src + a); /*add 1 position dest and src*/
		a++;

	} /*END While*/


	return (dest);
}
