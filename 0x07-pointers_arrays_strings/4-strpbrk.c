#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: set of bytes
 * Return: pointer to matching bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int n = 0, i;

	while (s[n])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[n] == accept[i])
				return (s + n);
		}

		n++;
	}

	return ('\0');
}
