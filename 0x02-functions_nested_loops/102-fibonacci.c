#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int a, b, c, n;

	a = 1;
	b = 2;
	n = 3;
	printf("%d", a);
	printf(", %d", b);
	while (n <= 50)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
		n++;
	}
	putchar('\n');
	return (0);
}
