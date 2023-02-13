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
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == accept[i])
		{
			i++;
			break;
		}
	}

	return (i);
}
