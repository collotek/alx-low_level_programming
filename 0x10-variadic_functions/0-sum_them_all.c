#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_n;
	double sum;
	unsigned int k;

	va_start(sum_n, n);

	if (n == 0)
	{
		return (0);
	}

	k = 0;
	while (k < n)
	{
		sum += va_arg(sum_n, int);
		k++;
	}
	va_end(sum_n);
	return (sum);
}


