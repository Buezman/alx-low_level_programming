#include <stdio.h>

/**
 * main - prints lowerCase and upperCase alpahbets
 * Return: 0 (success)
 */
int main(void)
{
	char l, u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
