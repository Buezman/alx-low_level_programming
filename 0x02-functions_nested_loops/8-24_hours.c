#include "main.h"
/**
 * jack_bauer - prints every minite of the day in format hh:mm
 *
 * Return: 0 (success)
 *
 */
void jack_bauer(void)
{
	int h, m, n, k;

	h = 0;
	while (h < 3)
	{
		m = 0;
		while (m < 10)
		{
			if (h == 2 && m == 4)
				break;
			n = 0;
			while (n < 6)
			{
				k = 0;
				while (k < 10)
				{
					_putchar(h + 48);
					_putchar(m + 48);
					_putchar(58);
					_putchar(n + 48);
					_putchar(k + 48);
					_putchar('\n');
					k++;
				}
				n++;
			}
			m++;
		}
		h++;
	}
}
