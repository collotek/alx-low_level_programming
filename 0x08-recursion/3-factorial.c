#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n: input integer
 * Return: -1 if below 0 and factorial if above 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
