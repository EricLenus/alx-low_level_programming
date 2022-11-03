#include "main.h"

/**
 * _strlen_recursion - Returns length
 * @s: the string to be measured
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
