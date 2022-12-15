#include "main.h"
/**
 * print_sign - check for digit
 * @n: n is an integer
 *
 * Return: 1 (if digit), 0 (if otherwise)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
