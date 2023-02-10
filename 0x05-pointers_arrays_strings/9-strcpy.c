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
	int i = 0;

	while (src[i] && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
