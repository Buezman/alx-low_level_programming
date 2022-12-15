#include "main.h"
/**
 * print_times_table - prints times table of a number
 *
 * @n: positive integer
 *
 * Return: 0 (success)
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = i * j;
				if (j > 0 && x < 100)
					_putchar(' ');
				if (j > 0 && x < 10)
					_putchar(' ');
				if (x > 99)
				{
					_putchar((x / 100) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
				else if (x > 9)
				{
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else
					_putchar(x + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
