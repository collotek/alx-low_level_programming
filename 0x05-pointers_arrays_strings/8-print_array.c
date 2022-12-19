#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: input integer
 * @n: input integer
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (; b < n; b++)
	{
		printf("%d", *(a + b));
		if (b != (n - 1))
			printf(", ");
	}
	printf("\n");
}
