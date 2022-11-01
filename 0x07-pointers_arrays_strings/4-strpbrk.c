#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - prnts the consecutive character of s1 that are in s2
 * @s: source timing
 * @accept: searching sting
 *
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(acept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
