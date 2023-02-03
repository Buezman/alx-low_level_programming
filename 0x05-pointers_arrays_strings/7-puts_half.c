#include "main.h"
/**
 * puts_half - prints second-half of a string
 * @str: given string
 * Return: void
 *
 */
void puts_half(char *str)
{
	int h, i, n = 0;

	while (str[n])
		n++;

	h = (n % 2) == 0 ? n / 2 : (n - 1) / 2;

	for (i = n - h; i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}
