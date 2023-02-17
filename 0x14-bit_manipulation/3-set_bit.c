#include "main.h"
/**
 * set_bit - sets bit at index to 1
 * @n: pointer to base10 number
 * @index: index to set bit
 * Return: 1 if successful, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	       return (-1);

	*n ^= (1 << index);

	return (1);
}
