#include "main.h"

/**
 * print_binary - prints binary form of a number
 * @n: number to print
 * Return: void
 *
 */
void print_binary(unsigned long int n)
{
	while (n > 1)
	{
		_putchar((n & 1) + '0');
		n = n >> 1;
	}
}
