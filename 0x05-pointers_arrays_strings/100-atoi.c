#include "main.h"
/**
 * _atoi - converts a string to number
 * @s: given string
 * Return: converted number
 *
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int n = 0;

	while (s[i])
	{
		if (*s == '-')
			sign *= -1;
		if ((s[i] >= '0') && (s[i] <= '9'))
			n = (n * 10) + (s[i] - '0');
		i++;
	}

	return (n * sign);
}
