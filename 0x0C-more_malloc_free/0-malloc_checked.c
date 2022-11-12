#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - main entry
 * @b: input
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *b;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
