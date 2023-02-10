#include "main.h"
/**
 * _strcpy - copies a string to another string
 * @dest: destination string
 * @src: source string
 * Return: dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[n])
		n++;

	while (src[i] && dest[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
