#include "main.h"
/**
 * _puts - prints a given string follwed by newline
 * @s: given string
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
