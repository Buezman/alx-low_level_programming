#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of teo numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 - success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
