#include "main.h"

/**
 * main - function to copy file
 * @argc: number of inputs
 * @argv: arguments
 * Return: 1 on success, -1 on failure
 */

int main(int argc, char **argv)
{
	int fd;
	int fc;
	char *buf;

	if (argc != 3)
	{
		printf("erro");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't read from %s\n", argv[0]);
		exit(98);
	}
	buf = malloc(sizeof(char) * 1024);
	read(fd, buf, 1024);
	fc = close(fd);
	if (fc ==  -1)
	{
		printf("Error: Can't close fd%d\n", fd);
		exit(100);
	}

	fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd == -1)
	{
		printf("Error: Can't read from %s\n", argv[0]);
                exit(98);
        }

	write(fd, buf, 1024);
	free(buf);
	fc = close(fd);
        if (fc ==  -1)
        {
                printf("Error: Can't close fd%d\n", fd);
                exit(100);
        }
	printf("IT IS SUCCESS\n");
	return (1);
}

