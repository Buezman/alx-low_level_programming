#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: integer value of character
 * Return: 1 true, else 0
 *
 */

int _isdigit(int c)
{
	return ((c > 47 && c < 59) ? (1) : (0));
}
