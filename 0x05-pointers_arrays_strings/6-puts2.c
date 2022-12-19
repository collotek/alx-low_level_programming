#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every character of a string
 * followed by a new line
 * @str: input string
 * Return: nothing
 */
void puts2(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (c % 2 == 0)
			_putchar(str[c]);
		c++;
	}
}
