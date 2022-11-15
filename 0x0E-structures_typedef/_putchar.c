#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * on erro, -1 is returned and erro is set appropriately
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
