#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
