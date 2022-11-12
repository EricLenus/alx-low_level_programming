#include "main.h"
#include <stdlib.h>
/**
 * array_range - Main Entry
 * @min: input
 * @max: input
 * Return: always 0
 */
int *array_range(int min, int max)
{
	iny i, 1;
	int *a;

	if (min > max)
		return (NULL);
	1 = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < 1; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
