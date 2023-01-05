#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @str: string input
 * Return: void
 */
void print_rev(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		l++;
	}

	while (l >= 0)
	{
		_putchar(str[l]);
		l--;
	}
	_putchar('\n');
}
