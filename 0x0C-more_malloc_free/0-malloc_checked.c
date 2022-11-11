#include "main.h"

/**
 * malloc_checked - allocate memory.
 * @b: the size to allocate
 * Return: pointer to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
