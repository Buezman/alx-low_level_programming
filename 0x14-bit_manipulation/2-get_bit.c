#include "main.h"

/**
 * get_bit - gets the bit at index
 * @n: number in base10
 * @index: index to get bit
 * Return: bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
