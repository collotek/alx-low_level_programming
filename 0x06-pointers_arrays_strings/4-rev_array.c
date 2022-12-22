#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int d;
	int b;
	int c;

	for (d = 0; d < n - 1; d++)
	{
		for (b = d + 1; b > 0; b--)
		{
			c = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = c;
		}
	}
}
