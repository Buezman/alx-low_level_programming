#include "main.h"
/**
 * rev_string - reverses a string
 * @s: given string
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0, n = 0;
	char temp;

	while (s[l])
		l++;

	while (n < (l / 2))
	{
		temp = s[n];
		s[n] = s[l - 1];
		s[l - 1] = temp;
		n++;
		l--;
	}
}
