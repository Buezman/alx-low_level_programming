#include "main.h"
/**
 * puts2 - prints a string skipping one charcter
 * @str: given string
 * Return: void
 *
 */
void puts2(char *str)
{
	int i, n = 0;

	while (str[n])
		n++;

	for (i = 0; i < n; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
