#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value)
{
	int brek = 0;
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
			brek = 1;
			break;
		}
	}
	if ((brek == 0) | (array == NULL))
		return (-1);
return (-1);
}


