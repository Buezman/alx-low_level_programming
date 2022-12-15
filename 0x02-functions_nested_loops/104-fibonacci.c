#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	long int a, b, c, n;

	a = 1;
	b = 2;
	n = 3;
	printf("%ld", a);
	printf(", %ld", b);
	while (n <= 98)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %ld", c);
		n++;
	}
	putchar('\n');
	return (0);
	
}
