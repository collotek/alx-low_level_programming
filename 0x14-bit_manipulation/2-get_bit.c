#include "main.h"

/**
 * get_bit - returns a value of an int at a given index
 * @n: given int
 * @index: position of int
 * Return: value of bit or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (n == 0 && index < 64)
		return (0);

	for (m = 0; m <= 63; n >>= 1, m++)
	{
		if (index == m)
		{
			return (n & 1);
		}
	}
	return (-1);
}
