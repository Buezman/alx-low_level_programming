#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two integers
 * @a: integer 1
 * @b: integer 2
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: integer 1
 * @b: integer 2
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates a division of two numbers
 * @a: numerator
 * @b: denominator
 * Return: integer
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the modulus of a from b
 * @a: numerator
 * @b: denominator
 * Return: integer
 *
 */
int op_mod(int a, int b)
{
	return (a % b);
}
