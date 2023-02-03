#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2 to be joined to string 1
 * Return: contenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, l = 0;

	while (dest[i++])
		l++;

	for (i = 0; src[i]; i++)
		dest[l++] = src[i];

	return (dest);
}
