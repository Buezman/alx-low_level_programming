#include "main.h"
/**
 * print_times_table - prints times table of 0 to 9
 *
 * Return: 0 (success)
 *
 */
void print_times_table(void)
{
	int n, m, r;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			r = n * m;
			if (r > 9)
			{
				_putchar((r / 10) + '0');
			}
			_putchar((r % 10) + '0');
			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
