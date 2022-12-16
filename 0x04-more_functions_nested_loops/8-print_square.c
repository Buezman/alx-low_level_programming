#include "main.h"

/**
 * print_square - prints a square of side n using #
 * @n: intger
 * Return: 0 (success)
 */

void print_square(int n)
{
	int i, j;
	
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			if (i < (n - 1))
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
