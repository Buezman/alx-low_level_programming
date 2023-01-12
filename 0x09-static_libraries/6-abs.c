#include "main.h"
/**
 * _abs - gets the absolute value of a number
 * @n: given integer
 * Return: absolute value of n
 *
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
