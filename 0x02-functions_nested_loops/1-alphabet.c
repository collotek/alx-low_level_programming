#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

void main(int)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
