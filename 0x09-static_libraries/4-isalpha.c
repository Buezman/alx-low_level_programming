#include "main.h"
/**
 * _isalpha - determines if a character is an aplhabet
 * @c: input character
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <=90) || (c >=95 && c <= 122))
		return (1);
	else
		return (0);
}
