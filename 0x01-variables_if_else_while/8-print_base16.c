#include <stdio.h>

/**
 * main - prints all Hexadecimal numbers
 * Return: 0 (success)
 *
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n + 55);
		}
	}
	putchar('\n');
	return (0);
}
