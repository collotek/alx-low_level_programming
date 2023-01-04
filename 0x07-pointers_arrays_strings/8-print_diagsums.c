#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of a square
 * @a: points to an integer
 * @size: size of diagonal
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int j;
	int sumx1, sumx2;

	sumx1 = 0;
	sumx2 = 0;

	j = 0;
	while (j < size)
	{
		sumx1 = sumx1 + *(a + j * size + j);
		sumx2 = sumx2 + *(a + j * size + size - j - 1);
		j++;
	}
	printf("%i, %i\n", sumx1, sumx2);
}
