#include <stdio.h>

/**
 * main - prints digits combo
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i, j, k, l, a, b;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				l = 0;
				while (l < 10)
				{
					a = (i * 10) + j;
					b = (k * 10) + l;
					if (a < b)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						if (i == 9 && j == 8 && k == 9 && l == 9)
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
