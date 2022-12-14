#include "main.h"
/**
 * print_alphabet_x10(void): prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		round++;
	}
}
