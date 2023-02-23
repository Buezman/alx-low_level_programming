#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: pointer to first bit
 * @m: pointer to second bit
 * Return: no of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, i = 0;

	while (x > 0)
	{
		i += (x & 1);
		x >>= 1;
	}

	return (i);
}
