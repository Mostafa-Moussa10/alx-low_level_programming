#include "main.h"

/**
 * append_text_to_file - function to append the text at the end of file
 * @filename: pointer to file name
 * @text_content: file content
 * Return: 1 on success and -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}

