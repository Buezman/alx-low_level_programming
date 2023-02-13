#include "main.h"
/**
 * print_diagsums - prints the sum of diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, left = 0, right = 0;

	for (i = 0; i < size; i++)
	{
		left += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		right += a[i];
		a -= size;
	}

	_putchar(left + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(right + '0');
	_putchar('\n');
}
