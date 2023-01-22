#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - prints character
 * @list: list of characters
 * @separator: pointer
 * Return: 0
 */
void print_c(va_list list, char *separator)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
 * print_i - prints integer
 * @list: characters
 * @s:pointer
 * Return: 0
 */
void print_i(va_list list, char *s)
{
	printf("%s%d", s, va_arg(list, int));
}

/**
 * print_f - prints double
 * @list: characters
 * @separator: pointer
 * Return: 0
 */
void print_f(va_list list, char *separator)
{
	printf("%s%f", separator, va_arg(list, double));
}

/**
 * print_s - prints pointer to a character
 * @list: characters
 * @separator: pointer
 * Return: 0
 */
void print_s(va_list list, char *separator)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s%s", separator, s);
}

/**
 * print_all - prints anything
 * @format: pointer to a function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *separator;
	int k, l;

	format_type fm[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(list, format);

	separator = "";

	k = 0;
	while (format != NULL && format[k] != '\0')
	{
		l = 0;
		while (l < 4)
		{
			if (format[k] == *(fm[l]).fm)
			{
				fm[l].p(list, separator);
				separator = ", ";
			}
			l++;
		}
		k++;
	}
	printf("\n");
	va_end(list);
}
