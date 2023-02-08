#include "main.h"
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: points to textfile
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lr, lw;
	char *bufer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bufer = malloc(sizeof(char) * (letters));
	if (!bufer)
		return (0);
	lr = read(fd, bufer, letters);
	lw = write(STDOUT_FILENO, bufer, lr);

	close(fd);

	free(bufer);

	return (lw);
}
