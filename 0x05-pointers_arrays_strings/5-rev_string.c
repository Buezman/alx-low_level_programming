#include "main.h"
/**
 * rev_string - reverses a string
 * @s: given string
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0;

	while (s[l])
		l++;

	while (l > 0)
	{
		_putchar(s[l - 1]);
		l--;
	}
	_putchar('\n');
}
