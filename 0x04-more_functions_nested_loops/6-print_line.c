#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * @n: input integer
 * Return: 0
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		for (; a < n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
