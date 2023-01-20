#include "3-calc.h"

/**
 * op_add - return the sum of a and b
 * @a: integer type
 * @b:integer type
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return subtraction of a and b
 * @a: integer type
 * @b: integre type
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product
 * @a: type integr
 * @b: type integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return division of a and b
 * @a: input integer
 * @b: input integer
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the remainder of the divion of a and b
 * @a: input integer
 * @b: input integer
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
