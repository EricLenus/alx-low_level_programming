#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Main Entry
 * @b: input
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
