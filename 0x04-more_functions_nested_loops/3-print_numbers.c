#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int num = '0';

	for (; num <= '9'; num++)
		_putchar(num);
	_putchar('\n');
}


