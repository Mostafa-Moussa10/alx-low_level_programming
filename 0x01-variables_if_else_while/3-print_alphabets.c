#include <stdio.h>


int main(void)
{
	int ch;

	/*lower case alphabet*/
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	/*upper case alphabett*/
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}

	/*new line*/
	putchar('\n');

	return (0);
}
