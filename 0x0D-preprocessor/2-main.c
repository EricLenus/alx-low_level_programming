#include <stdio.h>
/**
 * main - prints the name of the file it was compilied from
 * Return: always 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
