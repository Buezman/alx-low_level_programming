#include "main.h"

/**
 * get_endianness - determines endianness
 * Return: if big-endian 1, otherwise 0
 *
 */
int get_endianness(void)
{
	int num = 1;
	char *e = (char *)&num;

	if (*e == 1)
		return (1);

	return (0);
}
