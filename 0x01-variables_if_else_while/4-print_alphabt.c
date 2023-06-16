#include <stdio.h>


int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		/*don't print q or e */
		if ((ch == 'q') || (ch == 'e'))
				continue;

		putchar(ch);
	}

	/*new line*/
	putchar('\n');

	return (0);
}
