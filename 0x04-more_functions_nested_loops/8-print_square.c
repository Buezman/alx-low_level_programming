#include "main.h"

/**
 * print_square - prints a square of side n using #
 * @size: intger
 * Return: 0 (success)
 */

void print_square(int size)
{
	int i, j;
	
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			if (i < (size - 1))
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
