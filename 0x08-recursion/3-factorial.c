#include "main.h"

/**
 * factorial - fuctorial of a number
 * @n: the number to find
 * Return: the fuctorial of the number
 */
int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
	return (-1);

	next = fuctorial(n - 1);
	return (n * next);
}
