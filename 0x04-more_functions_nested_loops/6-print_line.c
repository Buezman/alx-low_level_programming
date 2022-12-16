#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of _s
 * Return: 0 (success)
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
