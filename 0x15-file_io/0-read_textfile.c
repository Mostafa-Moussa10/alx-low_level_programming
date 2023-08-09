#include "main.h"

/**
 * read_textfile - function to read and print text from file
 * @filename: pointer to filename
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int i = 0;
	char *s;
	FILE *fp;

	s = malloc(sizeof(char) * letters);

	if (!s)
		return (0);

	fp = fopen(filename, "r");
	fgets(s, letters, fp);

	while (s)
	{
		putchar(s[i]);
		i++;
	}
	
	fclose(fp);

	return (i);
}
