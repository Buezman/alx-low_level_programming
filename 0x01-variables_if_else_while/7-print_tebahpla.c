#include <stdio.h>

/**
 * main - prints lowerCase alphabets in reverse
 * Return: 0 (success)
 */
int main(void)
{
	int c;

	for (c = 25; c >= 0; c--)
	{
		putchar(c + 97);
	}
	putchar('\n');
	return (0);
}
