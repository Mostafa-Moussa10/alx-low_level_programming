#include "main.h"

/**
 * create_file - fuction to create file
 * @filename: pointer to file name
 * @text_content: content of text
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, strlen(text_content));
	close(fd);

	return (1);
}
