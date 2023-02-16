#include "main.h"

/**
 * print_binary - prints binary form of a number
 * @n: number to print
 * Return: void
 *
 */
void print_binary(unsigned long int n)
{
	if (n > )
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
