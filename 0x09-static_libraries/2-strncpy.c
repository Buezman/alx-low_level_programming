#include "main.h"
/**
 * *_strncpy - copies a string to a limit
 * @dest: destination string
 * @src: source string
 * @n: limit of bytes to copy from src
 * Return: copied string, dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && (*(src + i) != '\0'))
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
