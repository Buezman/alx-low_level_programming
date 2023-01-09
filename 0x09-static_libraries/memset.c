#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory char
 * @b: constant byte char
 * @n: integer, bytes filled
 * Return: returns filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + 1) = b;
	}
	return (s);
}
