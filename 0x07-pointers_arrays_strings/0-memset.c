#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to memory area of s
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: pointer to memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && s[i])
	{
		s[i] = b;
		i++;
	}

	return (s);
}
