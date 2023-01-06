#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: input integer
 * @y: input integer
 * Return: -1 if y < 0 and int when y> 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
