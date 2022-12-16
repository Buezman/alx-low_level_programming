#include "main.h"

/**
 * print_diagonal - prints a diagonal line using \
 * @n: number of rows for line
 * Return: 0 (success)
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		if (i < (n -1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
