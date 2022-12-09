#include <stdio.h>

/**
 * main - prints all Hexadecimal numbers
 * Return: 0 (success)
 *
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	char c;

	for (c = 'A'; c < 'G'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
