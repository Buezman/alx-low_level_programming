#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: given character
 * Return: returns 1 if true, else 0
 *
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
