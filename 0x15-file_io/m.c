#include "main.h"

int main(int argc, char **argv)
{
	int fd = argc;
	char *filename = argv[1];
	char *buf = "i am programmer";

	fd = open(filename, O_WRONLY | O_CREAT, 0664);

	dprintf(STDOUT_FILENO, "alx is the worst course ever %s\n", buf);

	close(fd);
	return (0);
}




