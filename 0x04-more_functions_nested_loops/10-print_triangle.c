#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: input integer
 * Return: 0
 */
void print_triangle(int size)
{
	int a = 0, b, i = size - 1;

	if (size > 0)
	{
		for (; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < i)
					_putchar(' ');
				else
					_putchar('#');
			}
			i--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

