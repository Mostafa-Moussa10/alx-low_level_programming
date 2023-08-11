#include "main.h"

/**
 * main - function to copy file
 * @argc: number of inputs
 * @argv: arguments
 * Return: 1 on success, -1 on failure
 */

int main(int argc, char **argv)
{
	int fd1;
	int fd2;
	int fc;
	int r;
	int w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	buf = malloc(sizeof(char) * 1024);
	r = read(fd1, buf, 1024);
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}

	while (r > 0)
	{
		w = write(fd2, buf, r);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);
		if (fd2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(fd1, buf, 1024);

	}

	fc = close(fd1);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", fd1);
		exit(100);
	}
	fc = close(fd2);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", fd1);
		exit(100);
	}
	return (1);
}
