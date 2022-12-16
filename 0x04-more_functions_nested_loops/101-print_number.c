#include "main.h"
/**
 * print_number - prints n using only putchar
 * @n: integer
 * Return: 0 (success)
 */
void print_number(int n)
{
	unsigned int i, j, count;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i *= -1;
	}
	j = i;
	count = 1;
	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
	}
}
