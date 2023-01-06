#include "main.h"

/**
 * evaluate - finds the square root of a number
 * @n: input integer
 * @i: suare root of n
 * Return: i
 */
int evaluate(int n, int i)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
		return (evaluate(n, i + 1));
	else if (i * i == n)
		return (i);
	return (-1);
}

/**
 * _sqrt_recursion - returns square root of a number
 * @n: input integer
 * Return: int and -1 when n does not have a square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
		return (evaluate(n, i));
}
