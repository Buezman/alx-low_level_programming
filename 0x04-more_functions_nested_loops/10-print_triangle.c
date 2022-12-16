#include "main.h"

/**
 * print_triangle - prints hashed triangles
 *
 * @size: no, of rows for triangle
 *
 * Return: 0 (success)
 */
void print_triangle(int size)
{
	int i, l, r;

	i = size;
	while (i > 0)
	{
		r = 1;
		l = size - r;
		while (l > 0)
		{
			_putchar(' ');
		}
		while (r > 0)
		{
			_putchar('#');
		}
		if (size > 1)
		{
			_putchar('\n');
		}
		r++;
		i--;
	}
	_putchar('\n');
}
