#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
