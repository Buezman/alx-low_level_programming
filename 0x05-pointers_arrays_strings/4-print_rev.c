#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @str: string input
 * Return: void
 */
void print_rev(char *str)
{
	int l = _strlen(str);

	while (l >= 0)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
