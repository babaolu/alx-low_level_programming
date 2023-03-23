#include "3-calc.h"

/**
 * op_add - Adds two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Added number
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Subtracted number
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Multiplied number
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide a number by another
 * @a: First number
 * @b: Second number
 *
 * Return: Dividend
 */
int op_div(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a modulo b
 * @a: First number
 * @b: Second number
 *
 * Return: Result of modulo
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
