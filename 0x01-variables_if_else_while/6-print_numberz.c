#include<stdio.h>
/**
 * main - numberz
 *
 * Description: print 0-9 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');
	return (0);
}