#include "main.h"

/**
 * print_diagonal - prints a diagonal line using \
 * @n: number of rows for line
 * Return: 0 (success)
 */

void print_diagonal(int n)
{
	int i, j;

	j = 1;
	while (n > 0)
	{
		i = 1;
		while (i < j)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		if (n > 1)
		{
			_putchar('\n');
		}
		j++;
		n--;
	}
	_putchar('\n');
}
