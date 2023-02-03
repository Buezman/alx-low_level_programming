#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: string 2
 * @n: byte limit of src to be copied
 * Return: copied string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, s = 0;

	while (src[i++])
		s++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = s; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
