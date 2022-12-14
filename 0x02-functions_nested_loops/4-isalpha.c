#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 *
 * @c: ASCII value of character
 *
 * Return: 1 if c is an alphabet, otherwise 0
 *
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
