#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: string input
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		l++;
	}

	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
}
