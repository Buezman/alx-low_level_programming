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

	for (i = 1; i <= size; i++)
	{
		l = size - i;
		r = i;
		while (l > 0)
		{
			_putchar(' ');
			l--;
		}
		while (r > 0)
		{
			_putchar(35);
			r--;
		}
		if (i < size)
		{
			_putchar('\n');
		}
	}
	putchar('\n');
}
