#include<stdio.h>
#include<ctype.h>
/**
 * main - Hexadecimal
 *
 * Description: Print single digits
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
		{
			digit = 'a';
			for (digit <= 'f'; digit++)
			{
				putchar(digit);
		}
		break;
	}
	putchar('\n');
	return (0);
}
