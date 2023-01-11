#include "main.h"
#include <stdio.h>

/**
 * main - prints name of the program
 * @argc: no of arguments while running a program
 * @argv: the arguments entered when runing a program
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
