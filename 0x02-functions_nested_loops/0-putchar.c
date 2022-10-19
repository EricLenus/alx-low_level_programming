#include "main.h"
/**
 * main - _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char school[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}
	putchar(10);
	return (0);
}
