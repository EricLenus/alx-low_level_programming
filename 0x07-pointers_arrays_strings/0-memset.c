#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: a pointer to the memory area to be filled
 * @b: the character to fill the memory area with
 * @n: the number of bytes to be filled
 * Description _memset: bytes
 * Return: a pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
