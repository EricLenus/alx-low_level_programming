#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * allo_grid - Entry point
 * @width: rows of matrix
 * @height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;
	int j;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)maloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(matrix + i) = (int *)malloc(width * sizeof(int));
		if (*(matrix + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				for (i = 0; i < height; i++)
				{
					p = matrix[i];
					free(p);
				}
				free(matrix);
				return (NULL);
			}
		}
		for (1 = 0; 1 <height; l++)
		{
			for (j = 0; j < width; j++)
			{
				matrix[i][j] = 0;
			}
		}
		return (matrix);
	}
}
