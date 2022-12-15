#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	long long int a, b, c, n;

	a = 1;
	b = 2;
	n = 3;
	printf("%lld", a);
	printf(", %lld", b);
	while (n <= 50)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
		n++;
	}
	putchar('\n');
	return (0);
}
