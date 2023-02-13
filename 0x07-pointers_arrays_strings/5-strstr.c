#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search for substring
 * @needle: substring
 * Return: pointer to start of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, n = 0;

	while (haystack[n])
	{
		i = 0;

		while (haystack[i] == needle[i])
		{
			if (needle[i] == '\0')
				return (haystack + n);
			i++;
		}

		n++;
	}

	return ('\0');
}
