#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text written to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int lw;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
		;
	lw = write(fd, text_content, letters);
	if (lw == -1)
		return (-1);
	close(fd);

	return (1);
}

