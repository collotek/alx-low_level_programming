#include <stdio.h>
#include "main.h"

/**
 * _isdigit -checks for digit 0-9
 * @c: input integer
 * Return: 1 if c is digit and 0 otherwise
 */
int _isdigit(int c)
{
	char num = '0';
	int dgt = 0;

	for (; num <= '9'; num++)
	{
		if (num == c)
			dgt = 1;
	}
	return (dgt);
}
