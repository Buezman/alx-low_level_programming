#include "main.h"
/**
 * rot13 - encodes a string using rot13 algorithm
 * @str: given string
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i = 0, j;
	char alpha[52] = {'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
		'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
		'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z'};

	char rot13[52] = {'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c',
		'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D',
		'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (alpha[j] == str[i])
			{
				str[i] = rot13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
