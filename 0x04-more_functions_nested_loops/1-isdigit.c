#include "main.c"

/**
 * _isdigit - checks if character is a digit
 * @c: integer value of character
 * Return: i true, else 0
 *
 */

int _isdigit(int c)
{
	return ((c >= 48 && c <= 58) ? (1) : (0));
}
