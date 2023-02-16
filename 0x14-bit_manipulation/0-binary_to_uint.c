#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - onverts a binary to unsigned int
 * @b: binary string
 * Return: unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i, n = 0;
	unsigned int x = 1, num = 0;

	if (b == NULL)
		return (0);

	while (b[n])
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - '0') * x;
		x *= 2;
	}

	return (num);
}
