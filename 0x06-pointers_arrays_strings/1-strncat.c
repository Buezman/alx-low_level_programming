#include "main.h"
/**
 * _strncat - concatenates two strings but with atmost n bytes from src
 * @dest: string 1
 * @src: string 2
 * @n: byte limit of src to be used
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (dest[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[l++] = src[i];

	return (dest);
}
