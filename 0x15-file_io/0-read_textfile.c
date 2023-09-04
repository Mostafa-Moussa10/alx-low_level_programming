#include "main.h"

/**
 * read_textfile - function to read the content of the file
 * @filename: pointer to file name as string
 * @letters: number of letters to read
 * Return: the number of read letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	int fd;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	count = read(fd, buf, letters);
	write (STDOUT_FILENO, buf, count);

	return (count);
}


