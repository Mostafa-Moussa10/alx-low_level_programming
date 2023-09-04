#include "main.h"

/**
 * create_file - function to create file
 * @filename: pointer to file name
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (0);
	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));
	return (1);
}

