#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it followed by a new line
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
