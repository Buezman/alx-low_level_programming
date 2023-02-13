#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search for substring
 * @needle: substring
 * Return: pointer to start of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		while (haystack[i] == needle[i])
		{
			if (needle[i] == '\0')
				return (haystack);
			i++;
		}

		haystack++;
	}

	return ('\0');
}
