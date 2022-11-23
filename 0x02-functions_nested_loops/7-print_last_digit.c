#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: last digit of @n
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)
	{
		lastDigit *= -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
