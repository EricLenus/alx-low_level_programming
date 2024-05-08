#include "search_algos.h"
#include <math.h>

/**
*jump_search - searches for a value in a sorted array of integers
*               using the Jump search algorithm
*@array: pointer to the first element of the array to search in
*@size: number of elements in array
*@value: value in array to be searched for
*Return: first index where 'value' is located
*/

int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, step;

	step = sqrt(size);
	if (array == NULL || size == 0)
		return (-1);
	while (array[(int)fmin(step, size) - 1] < value)
	{
		printf("Value checked array[%f] = [%d]\n", fmin(step,
 size) - 1, array[(int)fmin(step, size) - 1]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		prev++;

		 /*If we reached next block or end of
		 array, element is not present*/
		if (prev == fmin(step, size))
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	/*If element is found*/
	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%u]\n", prev, array[prev]);
		return prev;
	}
	return (-1);
}
