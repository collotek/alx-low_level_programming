#include "main.h"

/**
 * append_text_to_file - appends text to the end of the file
 * @filename: filename
 * @text_content: text contents
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int lw;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		lw = write(fd, text_content, letters);
		if (lw == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
