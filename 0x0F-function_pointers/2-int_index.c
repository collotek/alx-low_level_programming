#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: elements
 * @size: size of the array
 * @cmp: pointer to a function used to compare values
 * Return: -1 if no value matches, if size <= 0 return 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;
	int hesabu;

	if (array != NULL && cmp != NULL)
	{
		k = 1;
		while (k <= size)
		{
			hesabu = cmp(array[k]);
			if (hesabu != 0)
			{
				return (k);
			}
			k++;
		}
	}
	return (-1);
}
