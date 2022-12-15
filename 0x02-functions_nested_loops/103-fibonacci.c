#include <stdio.h>
/**
 * main - prints sum of even valued terms in a fibonacci sequence
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	long int a, b, c, sum;

	bool isLess;

	a = 1;
	b = 2;
	sum = 2;
	isLess;
	while (isLess)
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
