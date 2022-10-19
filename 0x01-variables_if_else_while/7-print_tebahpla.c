#include<stdio.h>
/**
 * main - smile in the mirror
 *
 * Description: reverse print a-z
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	while (ch > 'a')
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
