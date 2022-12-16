#include <stdio.h>

/**
 * main - prints highest prime number factor of 612852475143
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	long int n, i;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
