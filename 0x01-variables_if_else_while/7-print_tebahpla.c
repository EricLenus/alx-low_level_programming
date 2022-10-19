#include<stdio.h>
#include<ctype.h>
/**
 * main - smile in the mirror
 *
 * Description: reverse print a-z
 *
 * Return: 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
