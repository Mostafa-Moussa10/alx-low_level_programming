#include "main.h"

/**
 * read_textfile - function to read and print text from file
 * @filename: pointer to filename
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int i = 0;
	int j = 0;
	char *s;
	int fp;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	s = malloc(sizeof(char) * letters);
	i = read(fp, s, letters);
	if (i == -1)
		return (0);

	j = write(STDOUT_FILENO, s, i);
	close(fp);

	return (j);
}
