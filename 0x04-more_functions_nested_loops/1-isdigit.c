#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: integer value of character
 * Return: 1 true, else 0
 *
 */

int _isdigit(int c)
{
	if (c > 47 && c < 59)
		return (1);
	else
		return (0);
}
