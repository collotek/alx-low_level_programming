#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: points to a string of 0 or 1 characters
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c;
	int len, bin;

	if (!b)
		return (0);
	c = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, bin = 1; len >= 0; len--, bin *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			c += bin;
	}
	return (c);
}
