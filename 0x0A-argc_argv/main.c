#include <ctype.h>
#include <stdio.h>


int main(int argc, char **argv)
{
	char *s;
	(void) argc;
	(void) argv;

	s = argv[1];

	if (isdigit(s))
		printf("jkfjs\n");

	else
		printf("moostfa\n");


	return (0);
}
