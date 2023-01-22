#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: pointer
 * @n: interger
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int k;
	char *str;

	va_start(strings, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(strings, char *);
		if (str != NULL)
		{
			printf("%s", str);
			if (k != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");
			if (k != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
