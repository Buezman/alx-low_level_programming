#include "main.h"
/**
 * main - prints all lowercase alphabets
 *
 * Return: 0 (success)
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
