#include "main.h"
/**
 * _atoi - converts a string to number
 * @s: given string
 * Return: converted number
 *
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int n = 0;

	while (*(s++) && n <= 0)
	{
		if (*s == '-')
			sign *= -1;
		if ((*s - '0') >= '0' && (*s - '0' <= '9'))
			n = (n * 10) + (*s - '0');
	}

	return (n * sign);
}
