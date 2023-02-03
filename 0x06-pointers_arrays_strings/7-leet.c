#include "main.h"
/**
 * leet - encodes a string to 1337
 * @str: given string
 * Return: encoded string
 *
 */
char *leet(char *str)
{
	int i = 0, j;

	char strArr[5] = {"a", "e", "o", "t", "l};

	int intArr[5] = {4, 3, 0, 7, 1};

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == strArr[j] || str[i] + 32 == strArr[j])
				str[i] = intArr[j] + '0';
		}
		i++;
	}
	return (str);
}
