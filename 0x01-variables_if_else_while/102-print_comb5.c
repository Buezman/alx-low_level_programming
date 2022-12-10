#include <stdio.h>

/**
 * main - prints digits combo
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			putchar(i + '0');
			putchar(i + '0');
			if(i < 9)
			{
				putchar(' ');
				putchar(j + '0');
				putchar(j + 1 + '0');
				putchar(',');
				putchar(' ');
			}	
		}
	}
	putchar('\n');
	return (0);
}
