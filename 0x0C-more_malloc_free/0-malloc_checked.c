#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc.
  * @b: size of memory to be allocated.
  *
  * Return: pointer to the allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
