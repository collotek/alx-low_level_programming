#include "main.h"
#include <stdio.h>

/**
 * file_error - checks for errors upon opening a file
 * @file_from: text is from
 * @file_to: text is to
 * @argv: arguments
 * Return: 0
 */
void file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checks code
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t no_chars, lw;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, argv);

	no_chars = 1024;
	while (no_chars == 1024)
	{
		no_chars = read(file_from, buf, 1024);
		if (no_chars == -1)
			file_error(-1, 0, argv);
		lw = write(file_to, buf, no_chars);
		if (lw == -1)
			file_error(0, -1, argv);
	}
	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
