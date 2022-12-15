#include "main.h"

/**
 * print_numbers- print sum(0-9)
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int sum = 0;
	int n;

	for ( n = 0; n <= 9; n++ ) 
	{
		sum = sum + n;
		
		_putchar("%d", sum);

	}
	_putchar("\n");
}


