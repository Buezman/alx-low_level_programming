#include "main.h"
/**
 * *_strncat - main method
 * @dest: destination string
 * @src: memory source
 * @n: integer
 * Return: concatenated string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
