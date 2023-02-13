#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: prefix substring
 * Return: length of accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i, n = 0;

	while (s[n])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[n] == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}

		n++;
	}

	return (bytes);
}
