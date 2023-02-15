#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its main function
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int n, i;
	int (*address)(int, char**) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i < (n - 1))
			printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
