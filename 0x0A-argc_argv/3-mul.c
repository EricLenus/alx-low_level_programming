#include "main.h"

#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; 1 < 3; i++)
			j *= atoi(argv[i]);

		printf("%\n", j);
	}
	return (0);
}
