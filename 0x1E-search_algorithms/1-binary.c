#include "search_algos.h"

/**
*binary_search - searches for a value in a sorted array of integers
*                using the Binary search algorithm
*@array: pointer to the first element of the array to search
*@size:  number of elements in array
*@value: value to be searched for
*Return: Index of first occurence of value in array
*/

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left = 0, right = size - 1, i;
	(void) size;

	if (!array || size == 0 || value == 0)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
