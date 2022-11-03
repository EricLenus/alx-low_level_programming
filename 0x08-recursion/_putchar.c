#include "main.h"
#include <unistd.h>

/**
 * _putchar.c -writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * on errr, -1 returned, 
 */
int _putchar( char c)
{
	return (write(1, &C, 1));
}
