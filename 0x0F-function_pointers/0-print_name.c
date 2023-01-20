#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: name
 * @f: function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
