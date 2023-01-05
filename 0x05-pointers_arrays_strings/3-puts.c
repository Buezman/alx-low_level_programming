#include "main.h"
/**
 * _puts - prints a given string to stdout
 * @str: given string
 * Return: void
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
