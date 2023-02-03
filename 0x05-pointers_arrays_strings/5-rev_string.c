#include "main.h"
/**
 * rev_string - reverses a string
 * @s: given string
 * Return: void
 */
void rev_string(char *s)
{
	int n = 0, i = 0, l;
	char temp;

	while (s[n])
		n++;
	l = n - 1;

	while (l >= (n / 2))
	{
		temp = s[i];
		s[i] = s[l];
		s[l] = temp;
		i++;
		l--;
	}
}
