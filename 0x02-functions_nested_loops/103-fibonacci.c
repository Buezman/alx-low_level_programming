#include <stdio.h>
#include <stdbool.h>
/**
 * main - prints sum of even valued terms in a fibonacci sequence
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	long int a, b, c, sum;

	a = 1;
	b = 2;
	sum = 2;
	while (true)
	{
		c = a + b;
		a = b;
		b = c;
		if (c > 4000000)
			break;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%ld\n", sum);
	return (0);
}
