#include "main.h"
/**
 * *_strcpy - copies content of one string to another
 * @dest: destination string
 * @src: source string
 * Return: copied string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
