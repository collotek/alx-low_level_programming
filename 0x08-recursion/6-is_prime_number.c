#include <stdio.h>

/**
 * evaluate - finds if a number is prime
 * @n: input integer
 * @i: iterate integer
 * Return: 0
 */
int evaluate(int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (n % i != 0)
	{
		return (evaluate(n, i + 1));
	}
	return (0);
}
/**
 * is_prime_number - find if prime
 * @n: input integer
 * Return: 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	return (evaluate(n, i));
}
