#include "main.h"
/**
 * main - prints the last digit of a number
 * 
 * @n: integer
 * Return: 0(success)
 *
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + 48);
	_putchar('\n');
}
